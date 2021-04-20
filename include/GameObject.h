#include "Vector.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    public:
        GameObject(char sign, Vector pos);
    private:
        char sign;
        Vector position;
};

#endif // GAMEOBJECT_H
