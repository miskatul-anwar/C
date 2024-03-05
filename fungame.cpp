#include <SDL2/SDL.h>

// Constants for window dimensions and square size
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int SQUARE_SIZE = 50;

int main() {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    SDL_Event event;
    int quit = 0;
    int squareX = 0, squareY = 0;
    int squareVelocityX = 1, squareVelocityY = 1;

    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Create window
    window = SDL_CreateWindow("Simple Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                              WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Create renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            }
        }

        // Update square position
        squareX += squareVelocityX;
        squareY += squareVelocityY;

        // Bounce square when it reaches window boundaries
        if (squareX <= 0 || squareX >= WINDOW_WIDTH - SQUARE_SIZE) {
            squareVelocityX = -squareVelocityX;
        }
        if (squareY <= 0 || squareY >= WINDOW_HEIGHT - SQUARE_SIZE) {
            squareVelocityY = -squareVelocityY;
        }

        // Clear screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Render square
        SDL_Rect square = { squareX, squareY, SQUARE_SIZE, SQUARE_SIZE };
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(renderer, &square);

        // Update screen
        SDL_RenderPresent(renderer);
    }

    // Destroy window and quit SDL
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    return 0;
}
