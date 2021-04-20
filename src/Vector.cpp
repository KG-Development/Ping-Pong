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

Vector2d Vector2d_add(Vector2d vec1, Vector2d vec2) {
    Vector2d vec(vec1.x + vec2.x, vec1.y + vec2.y, 0.0);
    return vec;
}

Vector2d Vector2d_sub(Vector2d vec1, Vector2d vec2) {
    Vector2d vec(vec1.x - vec2.x, vec1.y - vec2.y, 0.0);
    return vec;
}

int Vector2d_multiply(Vector2d vec1, Vector2d vec2) {
    Vector2d vec(vec1.x * vec2.x, vec1.y * vec2.y, 0.0);
    return vec.x + vec.y + vec.velocity;
}

void Vector2d::reverseX() {
    this->x *= -1;
}

void Vector2d::reverseY() {
    this->y *= -1;
}
