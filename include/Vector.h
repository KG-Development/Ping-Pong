#pragma once

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        int x, y;
        Vector(int x, int y);
        virtual ~Vector();

        int getX();
        int getY();

        void setX(int x);
        void setY(int y);

    protected:

    private:

};

#endif // VECTOR_H
