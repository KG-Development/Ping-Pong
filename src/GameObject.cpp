#include "GameObject.h"
#include "Vector.h"

GameObject::GameObject(char sign, Vector2d vec){
    this->position = vec;
    this->sign = sign;
}
