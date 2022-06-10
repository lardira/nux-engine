#include "Logger.h"

namespace NUX {
	std::shared_ptr<spdlog::logger> Logger::ClientLogger;
	std::shared_ptr<spdlog::logger> Logger::CoreLogger;

	void Logger::Init()
	{
		spdlog::set_pattern("%^|%T| %n: %v%$");

		ClientLogger = spdlog::stdout_color_mt("App");
		ClientLogger->set_level(spdlog::level::trace);
		CoreLogger = spdlog::stdout_color_mt("NUXCore");
		CoreLogger->set_level(spdlog::level::trace);
	}

	std::shared_ptr<spdlog::logger>& Logger::Client()
	{
		return ClientLogger;
	}

	std::shared_ptr<spdlog::logger>& Logger::Core()
	{
		return CoreLogger;
	}
}