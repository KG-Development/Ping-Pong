#pragma once

#include "Vector.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    public:
        GameObject(char sign, Vector2d pos);
        GameObject(){}
        Vector2d getPosition();
        char getSign();

        int getX();
        int getY();

    private:
        char sign;
        Vector2d position;
};

#endif // GAMEOBJECT_H
