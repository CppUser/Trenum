#include <Trenum.h>


class SandBoxApp : public tm::Application
{
public:
	SandBoxApp()
	{

	}
	~SandBoxApp()
	{

	}

};

tm::Application* tm::CreateApplication()
{
	return new SandBoxApp();
}


