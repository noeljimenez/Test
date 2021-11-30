#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#include <string>
#include <iostream>
#include <time.h>

void PintaDeVermell(SDL_Surface* surface);
void Pinta10quadrats(SDL_Surface* surface);

int main() {

	// TODO: Creació de finestra

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
PintaDeVermell(windowSurface);

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
Pinta10quadrats(windowSurface);


	// TODO: Funció que pinta de vermell la finestra 
	PintaDeVermell(windowSurface);


	

	return 0;
}

void PintaDeVermell(SDL_Surface* surface) {
	SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 255, 0, 0));
}


void Pinta10quadrats(SDL_Surface* surface) {

	for (int i = 0; i < 10; i++)
	{
		SDL_Surface* surfaceTempo;

		surfaceTempo = SDL_CreateRGBSurface(0, 10, 10, 32, 0, 0, 0, 0);
		SDL_FillRect(surfaceTempo, NULL, SDL_MapRGB(surfaceTempo->format, 255, 0, 0));

		SDL_Rect lloc;
		lloc.x = i * 10 + 10;
		lloc.y = 10;
		lloc.w = 10;
		lloc.h = 10;

		SDL_BlitSurface(surfaceTempo, NULL, surface, &lloc);
	}

}

