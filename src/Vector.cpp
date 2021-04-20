#include "Vector.h"

Vector::Vector(int x, int y) {
    this->x = x;
    this->y = y;
}

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
