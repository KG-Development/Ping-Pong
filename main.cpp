#include <iostream>
#include "GameObject.h"
#include "Vector.h"
#include "Field.h"

using namespace std;

int main(){
    Field field;
    GameObject objPlayerLeft('#', Vector2d(2, 5, 0.3), 15, 2, false);
    GameObject objBall('O', Vector2d(25, 12, 2), 1, 1, false);
    GameObject objPlayerRight('#', Vector2d(47, 5, 0.3), 15, 2, false);

    field.setObjectAtPosition(objPlayerLeft);
    field.setObjectAtPosition(objBall);
    field.setObjectAtPosition(objPlayerRight);

    field.printField();

    //vec.print();
}
