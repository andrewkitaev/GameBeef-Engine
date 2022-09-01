#include <SDL2/SDL.h>


int main() {


    SDL_Window* mainwindow;
    SDL_Renderer* mainrenderer;

    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0){

        mainwindow = SDL_CreateWindow("Test Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

        if(mainwindow != 0){

            mainrenderer = SDL_CreateRenderer(mainwindow, -1, 0);

        }

    }
    else {
        return 0;
    }

    SDL_SetRenderDrawColor(mainrenderer, 0, 0, 0, 255);

    SDL_RenderClear(mainrenderer);

    SDL_RenderPresent(mainrenderer);

    SDL_Delay(10000);

    SDL_Quit();

    return 0;
}