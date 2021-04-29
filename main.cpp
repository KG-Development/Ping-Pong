#include <iostream>
#include "GameObject.h"
#include "Vector.h"
#include "Field.h"
#include "Input.h"
#include <windows.h>
#include "myconio.h"

using namespace std;

void hidecursor();

int main(){

    Field field;
    GameObject objPlayerLeft('#', Vector2d(2, 16, 0.3), 15, 2, true);
    GameObject objBall('O', Vector2d(50, 23, 2), 1, 1, true);
    GameObject objPlayerRight('#', Vector2d(95, 16, 0.3), 15, 2, true);

    GameObject upperLine('=', Vector2d(0, 0, 0.0), 1, MAXX - 1, true);
    GameObject downLine('=', Vector2d(0, MAXY - 1, 0.0), 1, MAXX - 1, true);
    GameObject rightLine('|', Vector2d(MAXX - 1, 0, 0.0), MAXY, 1, false);
    GameObject leftLine('|', Vector2d(0, 0, 0.0), MAXY, 1, false);

    field.setObjectAtPosition(objPlayerLeft);
    field.setObjectAtPosition(objBall);
    field.setObjectAtPosition(objPlayerRight);
    field.setObjectAtPosition(upperLine);
    field.setObjectAtPosition(downLine);
    field.setObjectAtPosition(rightLine);
    field.setObjectAtPosition(leftLine);

    field.printField();

    //vec.print();

    hidecursor();

    //Demo
    Input input;
    while(1){
        gotoxy(0, 0);
        //cout << input.getKey() << " | Last: " << input.getLastKey() << " | Stored: " << input.getStoredKey() <<endl;
        if(input.getStoredKey() == 42) break;

        if (input.getStoredKey() == 'a') {
            field.gameObjectMove(Vector2d(-1, 0, 0.0), objBall);
            field.setObjectAtPosition(objBall);
        }
        if (input.getStoredKey() == 'd') {
            field.gameObjectMove(Vector2d(1, 0, 0.0), objBall);
            field.setObjectAtPosition(objBall);
        }
        if (input.getStoredKey() == 'w') {
            field.gameObjectMove(Vector2d(0, -1, 0.0), objBall);
            field.setObjectAtPosition(objBall);
        }
        if (input.getStoredKey() == 's') {
            field.gameObjectMove(Vector2d(0, 1, 0.0), objBall);
            field.setObjectAtPosition(objBall);
        }
        field.printField();
        cout << endl << input.getKey() << " | Last: " << input.getLastKey() << " | Stored: " << input.getStoredKey() <<endl;
        //Sleep(50);
    }

}

void hidecursor() {
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
