#pragma once

#ifndef FIELD_H
#define FIELD_H

#include "GameObject.h"

const int MAXX = 100;
const int MAXY = 46;

class Field {
    public:
        Field();
        virtual ~Field();

        void setObjectAtPosition(GameObject &obj);
        void printField();

        void gameObjectMove(Vector2d &moveVec, GameObject &obj);
        void moveBigObject(Vector2d moveVec, GameObject &obj);


    protected:

    private:
        void setBigObject(GameObject obj);
        int isColliding(GameObject &obj, Vector2d movePos);
        GameObject field[MAXY][MAXX];
};

#endif // FIELD_H
