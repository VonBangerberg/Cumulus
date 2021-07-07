#pragma once
#include <stdio.h>

#ifdef CM_PLATFORM_WINDOWS

extern Cumulus::Application* Cumulus::CreateApplication();

void main(int argc, char** argv)
{
	//----------To be changed later on
	Cumulus::Log::Init();

	Cumulus::Log::GetCoreLogger()->warn("(CORE) Initialized Log");
	Cumulus::Log::GetClientLogger()->warn("(CLIENT) Initialized Log");

	auto app = Cumulus::CreateApplication();
	app->Run();
	delete(app);
}

#endif