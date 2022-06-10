#pragma once

#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "NUXCore.h"

namespace NUX {
	class NUX_API Logger
	{
	public:
		static void Init();
		static std::shared_ptr<spdlog::logger>& Client();
		static std::shared_ptr<spdlog::logger>& Core();
	private:
		static std::shared_ptr<spdlog::logger> ClientLogger;
		static std::shared_ptr<spdlog::logger> CoreLogger;
	};
}

#define NUX_CORE_TRACE(...) NUX::Logger::Core()->trace(__VA_ARGS__)
#define NUX_CORE_INFO(...)  NUX::Logger::Core()->info(__VA_ARGS__)
#define NUX_CORE_WARN(...)  NUX::Logger::Core()->warn(__VA_ARGS__)
#define NUX_CORE_ERROR(...) NUX::Logger::Core()->error(__VA_ARGS__)
#define NUX_CORE_CRIT(...) NUX::Logger::Core()->critical(__VA_ARGS__)

//Macros for easy access to logging for client
#define NUX_TRACE(...) NUX::Logger::Client()->trace(__VA_ARGS__)
#define NUX_INFO(...)  NUX::Logger::Client()->info(__VA_ARGS__)
#define NUX_WARN(...)  NUX::Logger::Client()->warn(__VA_ARGS__)
#define NUX_ERROR(...) NUX::Logger::Client()->error(__VA_ARGS__)
#define NUX_CRIT(...) NUX::Logger::Client()->critical(__VA_ARGS__)