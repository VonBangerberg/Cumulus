#include <Cumulus.h>

class Sandbox : public Cumulus::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Cumulus::Application* Cumulus::CreateApplication()
{
	return new Sandbox();
}