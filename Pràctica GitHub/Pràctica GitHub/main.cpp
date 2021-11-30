#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#include <string>
#include <iostream>
#include <time.h>

int main() {

	// TODO: Creaci� de finestra
	SDL_Window* gWindow;
	SDL_Surface* gScreenSurface;

	gWindow = NULL;
	gScreenSurface = NULL;
	SDL_Init(SDL_INIT_VIDEO);
	gWindow = SDL_CreateWindow("SDL Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);
	gScreenSurface = SDL_GetWindowSurface(gWindow);
	// TODO: Finestra blanca al iniciar

	// TODO: Captura de tecles: 1,2 i ESC
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_KEYUP:
			if (event.key.keysym.scancode == SDL_SCANCODE_1) {
				//tecla 1
			}
			if (event.key.keysym.scancode == SDL_SCANCODE_2) {
				//tecla 2
			}
			if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {
				//tecla ESC, surt del programa
				SDL_Quit();
				return 0;
			}
			break;
		}
	}
	return 0;
}
	// TODO: Funci� que pinta de vermell la finestra

	// TODO: Funci� que pinta un quadrat aleatori verd
	
	void RandomGreenRect(SDL_Window* window, SDL_Surface* surface) {
		srand(time(NULL));
		SDL_Rect* rect;
		rect->x = rand() % 200 + 1;
		rect->y = rand() % 200 + 1;
		rect->w = rand() % 200 + 1;
		rect->h = rand() % 200 + 1;
		SDL_FillRect(surface, rect, 0x00FF00);
		SDL_UpdateWindowSurface(window);
	}
	// TODO: Funci� que pinta els 10 quadrats

	// TODO: Fer que el programa surti amb ESC



