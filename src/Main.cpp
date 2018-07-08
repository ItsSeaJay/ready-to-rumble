#include <string>
#include "SDL.h"

int main(int argc, char** argv)
{
	bool quit = false;
	std::string title = "Ready To Rumble";
	SDL_Window* window;
	SDL_Event e;

	SDL_Init(SDL_INIT_VIDEO)
	window = SDL_CreateWindow
	(
		title,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		SDL_WINDOW_SHOWN
	);

	while(!quit)
	{
		while(SDL_PollEvent(&e) != 0)
		{
			switch(e.type)
			{
				case SDL_QUIT:
					quit = true;
					break;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}