#include "Log.h"

namespace Cumulus
{
	Logger* Log::s_CoreLogger;
	Logger* Log::s_ClientLogger;


	void Log::Init()
	{
		s_CoreLogger = new Logger("Core");
		s_ClientLogger = new Logger("Client");
	}
}