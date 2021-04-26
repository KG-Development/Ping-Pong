#pragma once

#include "Vector.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    public:
        int length;
        int width;

        GameObject(char sign, Vector2d pos, int length, int width);
        GameObject(){}
        Vector2d getPosition();

        char getSign();

        int getX();
        int getY();

        int getPrevX();
        int getPrevY();

        bool isPosChanged();
        Vector2d position;

    private:
        bool posChanged;

        char sign;
        //Vector2d position;
        Vector2d prevPosition;
};

#endif // GAMEOBJECT_H
