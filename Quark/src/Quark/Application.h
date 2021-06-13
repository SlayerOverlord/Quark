#pragma once
#include "DMF.h"

//Uses the Quark namespace
namespace Quark
{

	//Declarations for the Application class
	class QUARK_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client instance
	Application* CreateApplication();

}
