#include "Vector.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    public:
        GameObject(char sign, Vector2d pos);
    private:
        char sign;
        Vector2d position;
};

#endif // GAMEOBJECT_H
