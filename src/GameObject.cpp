#include "GameObject.h"

GameObject::GameObject(char sign, Vector::Vector pos){
    this->position = pos;
    this->sign = sign;
}
virtual GameObject::~GameObject(){

    this->position = Vector::Vector(0, 0);
    this->sign = ' ';
}
