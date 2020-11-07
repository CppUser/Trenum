#include "Log.h"

namespace Trenum {

	std::shared_ptr<spdlog::logger> Log::m_CoreLogs;
	std::shared_ptr<spdlog::logger> Log::m_GameLogs;
	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		m_CoreLogs = spdlog::stdout_color_mt("TM_ENGINE");
		m_CoreLogs->set_level(spdlog::level::trace);
		m_GameLogs = spdlog::stdout_color_mt("SANDBOX");
		m_GameLogs->set_level(spdlog::level::trace);
	}
}
