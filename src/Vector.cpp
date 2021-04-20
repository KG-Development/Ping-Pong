#include "Vector.h"
#include <iostream>

Vector::~Vector() {
    this->x = 0;
    this->y = 0;
}

int Vector::getX() {
    return this->x;
}

int Vector::getY() {
    return this->y;
}

void Vector::setX(int x) {
    this->x = x;
}

void Vector::setY(int y) {
    this->y = y;
}

float Vector::getVelocity() {
    return this->velocity;
}

void Vector::setVelocity(float vel) {
    this->velocity = vel;
}

void Vector::print() {
    std::cout << "X: " << this->x << "\nY: " << this->y << "\nSpeed: " << this->velocity << std::endl;
}
