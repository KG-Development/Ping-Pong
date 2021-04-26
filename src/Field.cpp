#include "Field.h"
#include <iostream>

Field::Field() {
    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            field[i][j] = 0;
        }
    }
}

Field::~Field() {
    //dtor
}

void Field::setObjectAtPosition(GameObject &obj) {
    this->field[obj.getY()][obj.getX()] = obj.getSign();
    if (obj.isPosChanged()) {
        this->field[obj.getPrevY()][obj.getPrevX()] = 0;
    }
}

void Field::printField() {
    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            if (field[i][j]) {
                std::cout << this->field[i][j];
            }else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
