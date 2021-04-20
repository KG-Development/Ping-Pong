#include "Vector.h"
#include <iostream>

Vector2d::Vector2d(int x, int y, float vel) {
    this->x = x;
    this->y = y;
    this->velocity = vel;
};

int Vector2d::getX() {
    return this->x;
}

int Vector2d::getY() {
    return this->y;
}

void Vector2d::setX(int x) {
    this->x = x;
}

void Vector2d::setY(int y) {
    this->y = y;
}

float Vector2d::getVelocity() {
    return this->velocity;
}

void Vector2d::setVelocity(float vel) {
    this->velocity = vel;
}

void Vector2d::print() {
    std::cout << "X: " << this->x << "\nY: " << this->y << "\nSpeed: " << this->velocity << std::endl;
}
