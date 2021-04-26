#include "GameObject.h"
#include "Vector.h"

GameObject::GameObject(char sign, Vector2d vec){
    this->position = vec;
    this->sign = sign;
}
Vector2d GameObject::getPosition(){
    return this->position;
}
char GameObject::getSign(){
    return this->sign;
}

int GameObject::getX() {
    return this->position.getX();
}

int GameObject::getY() {
    return this->position.getY();
}
