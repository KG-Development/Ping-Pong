#pragma once

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        int x, y;
        float velocity;

        Vector() {};
        Vector(int x, int y, float vel) {
            this->x = x;
            this->y = y;
            this->velocity = vel;
        };
        virtual ~Vector();

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
