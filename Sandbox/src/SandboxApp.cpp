#include <Louizy.h>

class Sandbox : public Louizy::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Louizy::Application* Louizy::CreateApplication()
{
	return new Sandbox();
}