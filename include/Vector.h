#pragma once

#ifndef VECTOR_H
#define VECTOR_H

namespace Vector {
    class Vector {
        public:
            int x, y;
            float velocity;

            Vector(int x, int y, float velocity);
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
}

#endif // VECTOR_H
