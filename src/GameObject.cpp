#include "GameObject.h"
#include "Vector.h"

GameObject::GameObject(char sign, Vector2d vec, int length, int width, bool collision){
    this->position = vec;
    this->sign = sign;
    this->prevPosition = vec;
    this->posChanged = false;
    this->length = length;
    this->width = width;
    this->collision = collision;
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

int GameObject::getPrevX() {
    return this->prevPosition.getX();
}

int GameObject::getPrevY() {
    return this->prevPosition.getY();
}

bool GameObject::isPosChanged() {
    return this->posChanged;
}
bool GameObject::isCollision(){
    return this->collision;
}
void GameObject::setCollision(bool state){
    this->collision = state;
}
void GameObject::setMoved(bool state){
    this->posChanged = state;
}

void GameObject::setPrevX(int x) {
    this->prevPosition.setX(x);
}

void GameObject::setPrevY(int y) {
    this->prevPosition.setY(y);
}

void GameObject::setPrevPosition(Vector2d vec) {
    this->prevPosition = vec;
}
