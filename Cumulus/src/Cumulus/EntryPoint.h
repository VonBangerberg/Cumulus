#pragma once
#include <stdio.h>

#ifdef CM_PLATFORM_WINDOWS

extern Cumulus::Application* Cumulus::CreateApplication();

void main(int argc, char** argv)
{
	//----------To be changed later on

	auto app = Cumulus::CreateApplication();
	app->Run();
	delete(app);
}

#endif