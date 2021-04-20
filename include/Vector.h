#pragma once

#ifndef VECTOR_H
#define VECTOR_H

class Vector2d {
    public:
        int x, y;
        float velocity;

        Vector2d() {};
        Vector2d(int x, int y, float vel);

        int getX();
        int getY();
        float getVelocity();

        void setX(int x);
        void setY(int y);
        void setVelocity(float vel);

        void reverse();

        void print();

    protected:

    private:

};

Vector2d Vector2d_add(Vector2d vec1, Vector2d vec2);
Vector2d Vector2d_sub(Vector2d vec1, Vector2d vec2);
int Vector2d_multiply(Vector2d vec1, Vector2d vec2);

#endif // VECTOR_H
