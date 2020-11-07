//TODO: disocover more on spdlog


#pragma once
#include <memory>
#include "../EngineCore.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Trenum {
	class TM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogs(){ return m_CoreLogs; }
		inline static std::shared_ptr<spdlog::logger>& GetGameLogs(){ return m_GameLogs; }

	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogs;
		static std::shared_ptr<spdlog::logger> m_GameLogs;

	};
}

//Core Log Macs
#define TM_CORE_ERROR(...) ::Trenum::Log::GetCoreLogs()->error(__VA_ARGS__)
#define TM_CORE_INFO(...)  ::Trenum::Log::GetCoreLogs()->info(__VA_ARGS__)
#define TM_CORE_TRACE(...) ::Trenum::Log::GetCoreLogs()->trace(__VA_ARGS__)
#define TM_CORE_WARN(...)  ::Trenum::Log::GetCoreLogs()->warn(__VA_ARGS__)
#define TM_CORE_FATAL(...) ::Trenum::Log::GetCoreLogs()->fatal(__VA_ARGS__)

//Client Log Macs
#define TM_ERROR(...) ::Trenum::Log::GetGameLogs()->error(__VA_ARGS__)
#define TM_INFO(...)  ::Trenum::Log::GetGameLogs()->info(__VA_ARGS__)
#define TM_TRACE(...) ::Trenum::Log::GetGameLogs()->trace(__VA_ARGS__)
#define TM_WARN(...)  ::Trenum::Log::GetGameLogs()->warn(__VA_ARGS__)
#define TM_FATAL(...) ::Trenum::Log::GetGameLogs()->fatal(__VA_ARGS__)
