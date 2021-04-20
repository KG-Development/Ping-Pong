#include <iostream>
#include "GameObject.h"
#include "Vector.h"

using namespace std;

int main(){
    Vector2d vec(3, 4, 0.0);

    GameObject obj('#', Vector2d(0, 1, 0.3));
    obj.getPosition().print();

    cout << obj.getSign() << "\n\n";

    vec.print();
}
