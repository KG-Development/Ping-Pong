#include "Input.h"

Input::Input()
{
    //ctor
}

Input::~Input()
{
    //dtor
}

char Input::getKey(){

    if(kbhit()){
        this->lastSign = this->key;
        this->key = getch();
        return this->key;
    }
    return -1;

}
char Input::getLastKey(){
    return this->lastSign;
}
char Input::getStoredKey(){
    return this->key;
}

