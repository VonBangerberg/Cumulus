#pragma once

#include "Core.h"

namespace Cumulus {

	class CUMULUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in client
	Application* CreateApplication();

}