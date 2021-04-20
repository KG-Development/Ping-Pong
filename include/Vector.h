#pragma once

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        int x, y;
        float velocity;

        Vector() {};
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
