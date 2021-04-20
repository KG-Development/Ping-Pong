#include <iostream>
#include "GameObject.h"
#include "Vector.h"

using namespace std;

int main(){
    Vector vec(1, 3);

    vec.setX(9);

    cout << vec.getX() << endl << vec.getY();
}
