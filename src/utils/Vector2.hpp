#pragma once

class OVector2 {
    public:
        OVector2(float x = 0, float y = 0) {
            this->x = x;
            this->y = y;
        }

        float GetX() {
            return this->x;
        }
        
        float GetY() {
            return this->y;
        }

        void SetX(float x) {
            this->x = x;
        }

        void SetY(float y) {
            this->y = y;
        }

    private:
        float x = 0;
        float y = 0;
};