#pragma once


#ifdef TM_PLATFORM_WINDOWS

extern tm::Application* tm::CreateApplication();

int main(int argc, char** argv) {

	auto app = tm::CreateApplication();

	app->Run();
	delete app;
}

#endif