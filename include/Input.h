#ifndef INPUT_H
#define INPUT_H

#include <conio.h>
class Input
{
    public:
        Input();
        virtual ~Input();
        char getKey();

        char getLastKey();
        char getStoredKey();

    private:
        char lastSign;
        char key;
};

#endif // INPUT_H
