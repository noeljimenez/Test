#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#include <string>
#include <iostream>

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

	// TODO: Funció que pinta un quadrat aleatori verd

	// TODO: Funció que pinta els 10 quadrats

	// TODO: Fer que el programa surti amb ESC


	return 0;
}