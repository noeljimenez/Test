#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>

#include <string>
#include <iostream>

void PintaDeVermell(SDL_Surface* surface);
void Pinta10quadrats(SDL_Surface* surface);

int main() {

	// TODO: Creació de finestra
	

	// DONE: Finestra blanca al iniciar
	SDL_FillRect(windowSurface, NULL, SDL_MapRGB(windowSurface->format, 255, 255, 255));

	// TODO: Captura de tecles: 1,2 i ESC


	// TODO: Funció que pinta de vermell la finestra XXXXXXXXX
	PintaDeVermell(windowSurface);


	// TODO: Funció que pinta un quadrat aleatori verd


	// TODO: Funció que pinta els 10 quadrats XXXXXXXXX
	


	// TODO: Fer que el programa surti amb ESC


	return 0;
}

void PintaDeVermell(SDL_Surface* surface) {
	SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 255, 0, 0));
}


