#include "Field.h"
#include <iostream>

Field::Field() {
    GameObject obj('0', Vector2d(0, 0, 0.0), 0, 0);
    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            field[i][j] = obj;
        }
    }
}

Field::~Field() {
    //dtor
}

void Field::setObjectAtPosition(GameObject &obj) {
    GameObject objDummy('0', Vector2d(0, 0, 0.0), 0, 0);

    if (obj.length > 1 || obj.width > 1) {
        this->setBigObject(obj);
        return;
    }
    this->field[obj.getY()][obj.getX()] = obj;
    if (obj.isPosChanged()) {
        this->field[obj.getPrevY()][obj.getPrevX()] = objDummy;
    }
}

void Field::printField() {
    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            if (field[i][j].getSign() != '0') {
                std::cout << this->field[i][j].getSign();
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
            this->field[obj.getY()][obj.getX()] = obj;
            obj.position.setX(obj.getX() + 1);
        }
        obj.position.setY(obj.getY() + 1);
        obj.position.setX(x);
    }
}
