#include "Vector.h"
#include <iostream>

Vector::Vector::Vector(int x, int y, float velocity) {
    this->x = x;
    this->y = y;
    this->velocity = velocity;
}

Vector::Vector::~Vector() {
    this->x = 0;
    this->y = 0;
}

int Vector::Vector::getX() {
    return this->x;
}

int Vector::Vector::getY() {
    return this->y;
}

void Vector::Vector::setX(int x) {
    this->x = x;
}

void Vector::Vector::setY(int y) {
    this->y = y;
}

float Vector::Vector::getVelocity() {
    return this->velocity;
}

void Vector::Vector::setVelocity(float vel) {
    this->velocity = vel;
}

void Vector::Vector::print() {
    std::cout << "X: " << this->x << "\nY: " << this->y << "\nSpeed: " << this->velocity << std::endl;
}
