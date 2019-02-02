#pragma once

#include "Core.h"

namespace Louizy {

	class LOUIZY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
