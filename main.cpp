#include <iostream>
#include "GameObject.h"
#include "Vector.h"
#include "Field.h"

using namespace std;

int main(){
    Field field;
    GameObject obj('#', Vector2d(10, 10, 0.3));

    field.setObjectAtPosition(obj);
    field.printField();

    //vec.print();
}
