#include <Trenum.h>


class SandBoxApp : public Trenum::Application
{
public:
	SandBoxApp()
	{

	}
	~SandBoxApp()
	{

	}

};

Trenum::Application* Trenum::CreateApplication()
{
	return new SandBoxApp();
}

