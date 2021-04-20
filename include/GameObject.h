#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Vector.h"
class GameObject
{
    public:
        GameObject(char sign, Vector::Vector pos);
        virtual ~GameObject();
    private:
        char sign;
        Vector::Vector position;
};

#endif // GAMEOBJECT_H
