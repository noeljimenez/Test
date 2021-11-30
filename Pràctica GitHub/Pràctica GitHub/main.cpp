#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#include <string>
#include <iostream>

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


	// TODO: Funció que pinta de vermell la finestra 
	PintaDeVermell(windowSurface);


	// TODO: Funció que pinta un quadrat aleatori verd


	// TODO: Funció que pinta els 10 quadrats 
	Pinta10quadrats(windowSurface);


	// TODO: Fer que el programa surti amb ESC


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

