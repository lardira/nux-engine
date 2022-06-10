#pragma once

#ifdef NUX_PLATFORM_WINDOWS

#include "App.h"

extern NUX::App* NUX::CreateApp();

int main(int argc, char** argv)
{
	NUX::App* app = NUX::CreateApp();
	app->Run();
	delete app;
}

//Must be used right after definition of the application class in CLIENT
#define NUX_CREATE_APP(app) NUX::App* NUX::CreateApp() { return new app(); }

#endif