#include <iostream>
#include "GameObject.h"
#include "Vector.h"
#include "Field.h"
#include "Input.h"
#include <windows.h>
#include "myconio.h"
#include <time.h>

using namespace std;

void hidecursor();

int main(){
    Field field;
    GameObject objPlayerLeft('#', Vector2d(2, 16, 0.3), 15, 2, true);
    GameObject objBall('O', Vector2d(50, 23, 2), 1, 1, true);
    GameObject objPlayerRight('#', Vector2d(95, 16, 0.3), 15, 2, true);

    GameObject upperLine('=', Vector2d(0, 0, 0.0), 1, MAXX - 1, true);
    GameObject downLine('=', Vector2d(0, MAXY - 1, 0.0), 1, MAXX - 1, true);
    GameObject rightLine('|', Vector2d(MAXX - 1, 0, 0.0), MAXY, 1, true);
    GameObject leftLine('|', Vector2d(0, 0, 0.0), MAXY, 1, true);

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

    Vector2d vecs[4] = {
        Vector2d(-1, 1, 0.0),
        Vector2d(1, -1, 0.0),
        Vector2d(-1, -1, 0.0),
        Vector2d(1, 1, 0.0)
    };

    int once = 0, idx;

    while(1){
        gotoxy(0, 0);
        if(input.getStoredKey() == 42) break;

        if (!once) {
            srand(time(NULL));
            idx = rand() % 4;
            once = 1;
        }
        field.gameObjectMove(vecs[idx], objBall);
        field.setObjectAtPosition(objBall);

        field.printField();
        cout << endl << input.getKey() << " | Last: " << input.getLastKey() << " | Stored: " << input.getStoredKey() <<endl;
        Sleep(10);
    }

}

void hidecursor() {
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
