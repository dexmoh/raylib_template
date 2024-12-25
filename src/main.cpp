#include <iostream>
#include "raylib.h"

int main(void) {
    const int SCREEN_W = 800;
    const int SCREEN_H = 600;
    const char* SCREEN_TITLE = "Raylib Project";

    // Create a window.
    InitWindow(SCREEN_W, SCREEN_H, SCREEN_TITLE);
    SetTargetFPS(60);

    // Main loop.
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(SKYBLUE);
        DrawText("Hello, raylib!", 20, 20, 30, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
