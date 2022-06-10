#pragma once

#include "NUXCore.h"

namespace NUX {
	class NUX_API App
	{
	public:
		App();
		~App();

		void Run();
	};

	//Create definition in client
	App* CreateApp();
}
