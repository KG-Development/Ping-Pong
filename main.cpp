#include <iostream>
#include "GameObject.h"
#include "Vector.h"
#include "Field.h"
#include "Input.h"
#include <windows.h>
#include "myconio.h"

using namespace std;

int main(){

    Field field;
    GameObject objPlayerLeft('#', Vector2d(2, 5, 0.3), 15, 2, false);
    GameObject objBall('O', Vector2d(25, 12, 2), 1, 1, false);
    GameObject objPlayerRight('#', Vector2d(47, 5, 0.3), 15, 2, false);

    field.setObjectAtPosition(objPlayerLeft);
    field.setObjectAtPosition(objBall);
    field.setObjectAtPosition(objPlayerRight);

    field.gameObjectMove(Vector2d(1, 1, 0.0), objBall);
    field.setObjectAtPosition(objBall);

    field.printField();

    //vec.print();

    //Demo
    Input input;
    while(1){
        gotoxy(0, 0);
        cout << input.getKey() << " | Last: " << input.getLastKey() << " | Stored: " << input.getStoredKey() <<endl;
        if(input.getStoredKey() == 42) break;
        Sleep(100);
    }

}
