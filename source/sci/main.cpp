#include <cstdlib>
#include <sci/Application.hpp>
#include <SDL2/sdl.h>
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    Application::create_instance();


	SDL_Window*Window=SDL_CreateWindow("sciokno",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE  );

	int s = 0;
	while (s == 0)
	{
		SDL_Event zdarzenie;
		

		while (SDL_PollEvent(&zdarzenie)) 
		{
			switch (zdarzenie.type)

				case  SDL_KEYDOWN:
				case  SDL_KEYUP:

					cout << zdarzenie.key.timestamp;
					cout << zdarzenie.key.keysym.scancode;

						

			    break;
 
				
		}


	}

    return 0;
}
