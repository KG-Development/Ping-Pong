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

        void print();

    protected:

    private:

};

#endif // VECTOR_H
