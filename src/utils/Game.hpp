#pragma once

#include <iostream>
#include "GameWindow.hpp"
#include "Map.hpp"

class Game {
    public:
        GameMap map;
        GameWindow window;

        Game() {
            this->window.Init(this->map);
        }
};