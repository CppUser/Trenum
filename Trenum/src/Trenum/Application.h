#pragma once
#include "EngineCore.h"

namespace tm {
	class TM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run ();
	};


	//To be defined in client
	Application* CreateApplication();

}

