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
    if (obj.length > 1) {
        this->setBigObject(obj);
        return;
    }
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

void Field::setBigObject(GameObject obj) {
    int x = obj.position.getX();

    for (int i = 0; i < obj.length; ++i) {
        for (int j = 0; j < obj.width; ++j) {
            this->field[obj.getY()][obj.getX()] = obj.getSign();
            obj.position.setX(obj.getX() + 1);
        }
        obj.position.setY(obj.getY() + 1);
        obj.position.setX(x);
    }
}
