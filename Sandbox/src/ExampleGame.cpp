#include <iostream>
#include "NUX.h"

//APP CREATION EXAMPLE
class ExampleGame : public NUX::App
{
public:
	ExampleGame()
	{
	}

	~ExampleGame()
	{
	}
};

NUX_CREATE_APP(ExampleGame);
//!APP CREATION EXAMPLE