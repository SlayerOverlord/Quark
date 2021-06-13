#include <Quark.h>

//A Dynamics class that is a child of Quark's Application class
class Dynamics : public Quark::Application
{
public:
	Dynamics()
	{

	}

	~Dynamics()
	{

	}
};

//Implements the CreateApplication function from Quark's Application translation unit
Quark::Application* Quark::CreateApplication()
{
	return new Dynamics();
}