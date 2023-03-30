#pragma once

#include <raylib.h>
#include <iostream>
#include "Vector2.hpp"
#include "Material.hpp"

OVector2 size(100, 100);

/**
 * This class is kinda Abstract
 * You should create other class by extending them with this and not using this class example:
 * class Tree extends GameObject
 * 
 */
class GameObject {
    public:
        OMaterial material;
        OVector2 position;
        OVector2 size = size;
        float rotation = 0;

        GameObject() {}


        /* Update method called each frame */
        void Update() {
            this->Draw();
        }
        
        /* Draw method using RayLib API To render object */
        void Draw() {
            if(this->material.GetType() == (char*) "Color") {
                int r, g, b;
                char const *hexColor = this->material.GetValue();
                std::sscanf(hexColor, "#%02x%02x%02x", &r, &g, &b);

                Color objColor = { (unsigned char) r, (unsigned char) g, (unsigned char) b, 255 };

                DrawRectangle(0, 0, 80, 80, objColor);
            }
        }
};