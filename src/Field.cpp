#include "Field.h"
#include <iostream>

Field::Field() {
    GameObject obj('0', Vector2d(0, 0, 0.0), 0, 0, false);
    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            field[i][j] = obj;
        }
    }
}

Field::~Field() {
    //dtor
}

int Field::isColliding(GameObject &obj, Vector2d movePos){
    GameObject temp = field[obj.getY() + movePos.getY()][obj.getX() + movePos.getX()];
    if(temp.isCollision()) {
        if (field[obj.getY() + movePos.getY()][obj.getX() + movePos.getX()].getSign() == '=') {
            return 1;
        }else {
            return 2;
        }
    };

    return false;
}
void Field::setObjectAtPosition(GameObject &obj) {
    GameObject objDummy('0', Vector2d(0, 0, 0.0), 0, 0, false);

    if (obj.length > 1 || obj.width > 1) {
        this->setBigObject(obj);
        return;
    }
    this->field[obj.getY()][obj.getX()] = obj;
    if (obj.isPosChanged()) {
        this->field[obj.getPrevY()][obj.getPrevX()] = objDummy;
        this->field[obj.getY()][obj.getX()].setMoved(false);
        obj.setPrevPosition(obj.position);
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

void Field::gameObjectMove(Vector2d &moveVec, GameObject &obj) {
    bool alreadyMoved = false;
    int coll = 0;

    for (int i = 0; i < MAXY; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            if (obj.getX() == j && obj.getY() == i) {
                if((coll = isColliding(obj, moveVec))) {
                    if (coll == 1) {
                        moveVec.reverseY();
                    }
                    if (coll == 2) {
                        moveVec.reverseX();
                    }
                    //std::cout << "Collision: " << isColliding(obj, moveVec);
                }
                obj.position = Vector2d_add(obj.position, moveVec);
                obj.setMoved(true);
                this->field[obj.getY()][obj.getX()] = obj;

                alreadyMoved = true;
                break;
            }
        }
        if (alreadyMoved) break;
    }
}
