#define _CRT_SECURE_NO_WARNINGS
#include "Logger.h"

//info declares whether the logger belind to the client or core
Logger::Logger(const char* info)
	:Info(info)
{
}

void Logger::Log(const char* msg, const char* level)
{
    std::cout << '[' << Info << "]\n" << '[' << return_current_time_and_date() << "] [" << level << "] " << msg << std::endl;
}

//def. not copied; Returns time %X-> hh:mm:ss
std::string Logger::return_current_time_and_date()
{
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%X");
    return ss.str();
}