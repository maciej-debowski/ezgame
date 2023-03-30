#pragma once

#include <vector>
#include <string>
#include "GameObject.hpp"
#include "Vector2.hpp"

class GameMap {
    public:
        GameMap() {
            // Create your map here using any tool you want or even create random terrain generator.
            GameObject testObj;

            this->map.push_back(testObj);
        }

        void Update() {
            for(GameObject obj : this->map) {
                obj.Update();
            }
        }

    private:
        std::vector<GameObject> map;
};