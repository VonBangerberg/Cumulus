#pragma once

#ifdef CM_PLATFORM_WINDOWS

extern Cumulus::Application* Cumulus::CreateApplication();

void main(int argc, char** argv)
{
	printf("CumulusEngine Started\n");

	auto app = Cumulus::CreateApplication();
	app->Run();
	delete(app);
}

#endif