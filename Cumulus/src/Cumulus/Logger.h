#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <iomanip>
#include "Core.h"

class CUMULUS_API Logger
{
public:
	Logger(const char* info);
	void Log(const char* msg, const char* level = "info");

private:
	const char* Info;
	std::string return_current_time_and_date();
};