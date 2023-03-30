#pragma once

#include <raylib.h>
#include <iostream>
#include "GameWindowData.hpp"
#include "Map.hpp"

class GameWindow {
    public:
        GameWindow() {}

        void Init(GameMap map) {
            InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
            SetTargetFPS(90);

            while (!WindowShouldClose()) {
                BeginDrawing();
                    ClearBackground(BLACK);

                    // Calling Map Update which will update & draw every object
                    map.Update();
                EndDrawing();
            }   
  
            CloseWindow();
        }
};