#include "GameObject.h"
#include "Vector.h"

GameObject::GameObject(char sign, Vector vec){
    this->position = vec;
    this->sign = sign;
}
