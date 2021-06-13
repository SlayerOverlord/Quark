#pragma once

#ifdef QRK_PLATFORM_WINDOWS

//Finds an implementation of the CreateApplication function inside the client
extern Quark::Application* Quark::CreateApplication();

//Main function to launch the Quark application
int main(int argc, char** argv)
{
	auto application = Quark::CreateApplication();	//Creates an application instance from the external client
	application->Run();								//Runs the client application instance
	delete application;								//Deletes the client application instance after the client application has
													//returned from the Run method
}
#endif