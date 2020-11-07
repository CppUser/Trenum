#pragma once


#ifdef TM_PLATFORM_WINDOWS

extern Trenum::Application* Trenum::CreateApplication();

int main(int argc, char** argv) {

	Trenum::Log::Init();
	TM_CORE_WARN("Initialized Log!");
	TM_INFO("Initialized Game Log!");

	auto app = Trenum::CreateApplication();

	app->Run();
	delete app;
}

#endif