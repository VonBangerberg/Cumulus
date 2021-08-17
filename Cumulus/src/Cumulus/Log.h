#pragma once

#include <memory>

#include "Core.h"
#include "Logger.h"


namespace Cumulus
{
	class CUMULUS_API Log
	{
	public:
		static void Init();
		static Logger* GetCoreLogger() { return s_CoreLogger; }
		static Logger* GetClientLogger() { return s_ClientLogger; }
	private:
		static Logger* s_CoreLogger;
		static Logger* s_ClientLogger;
	};
}

// Core log macros
#define CM_CORE_TRACE(...)	::Cumulus::Log::GetCoreLogger()->Log(__VA_ARGS__, "trace")
#define CM_CORE_INFO(...)	::Cumulus::Log::GetCoreLogger()->Log(__VA_ARGS__, "info")
#define CM_CORE_WARN(...)	::Cumulus::Log::GetCoreLogger()->Log(__VA_ARGS__, "warn")
#define CM_CORE_ERROR(...)	::Cumulus::Log::GetCoreLogger()->Log(__VA_ARGS__, "error")
#define CM_CORE_FATAL(...)	::Cumulus::Log::GetCoreLogger()->Log(__VA_ARGS__, "fatal")

// Client log macros
#define CM_TRACE(...)	::Cumulus::Log::GetClientLogger()->Log(__VA_ARGS__, "trace")
#define CM_INFO(...)	::Cumulus::Log::GetClientLogger()->Log(__VA_ARGS__, "info")
#define CM_WARN(...)	::Cumulus::Log::GetClientLogger()->Log(__VA_ARGS__, "warn")
#define CM_ERROR(...)	::Cumulus::Log::GetClientLogger()->Log(__VA_ARGS__, "error")
#define CM_FATAL(...)	::Cumulus::Log::GetClientLogger()->Log(__VA_ARGS__, "fatal")