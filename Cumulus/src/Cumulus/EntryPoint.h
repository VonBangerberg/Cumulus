#pragma once

#ifdef CM_PLATFORM_WINDOWS

extern Cumulus::Application* Cumulus::CreateApplication();

void main(int argc, char** argv)
{
	Cumulus::Log::Init();
	CM_CORE_INFO("Core logger initialized");
	CM_INFO("Client logger initialized");
	
	//----------To be changed later on

	auto app = Cumulus::CreateApplication();
	app->Run();
	delete(app);
}

#endif