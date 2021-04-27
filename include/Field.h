#pragma once

#ifndef FIELD_H
#define FIELD_H

#include "GameObject.h"

const int MAXX = 50;
const int MAXY = 25;

class Field {
    public:
        Field();
        virtual ~Field();

        void setObjectAtPosition(GameObject &obj);
        void printField();

        void gameObjectMove(Vector2d moveVec, GameObject &obj);

    protected:

    private:
        void setBigObject(GameObject obj);
        GameObject field[MAXY][MAXX];
};

#endif // FIELD_H
