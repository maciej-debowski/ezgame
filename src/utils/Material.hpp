#pragma once

#include <iostream>

class OMaterial {
    public:
        OMaterial(char* type = (char*)"Color", char* value = (char*)"#0099ff") {
            this->type = type;
            this->value = value;
        }

        void SetValue(char* value) {
            this->value = value;
        }

        char* GetValue() {
            return this->value;
        }

        char* GetType() {
            return this->type;
        }

    private:
        char* type = (char*) "Color";
        char* value = (char*) "#0099ff";

        void Init(char* type, char* value) {
            this->type = type;
            this->value = value;
        }
};