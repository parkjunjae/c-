#include "main.h"
#include <iostream>

using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
    if (xpos < 0 || ypos <0) {
        cout <<"벗어난 범위의 값" << endl;
        return false;
    }
    x = xpos;
    y = ypos;
    cout << "x : " << x << " y : " << y << endl;
    return true;
}

int Point::GetX() const {
    cout << x << endl;
    return x;
}
int Point::GetY() const {
    cout << y << endl;
    return y;
}

bool Point::SetX(int xpos) {
     if (xpos < 0 ) {
         cout << "벗어난 범위 값" <<endl;
         return false;
     }

    x = xpos;
    return true;
}

bool Point::SetY(int ypos) {
    if (ypos < 0 ) {
        cout << "벗어난 범위 값" <<endl;
        return false;
    }

    y = ypos;
    return true;
}


int main() {
    Point x;
    x.SetX(10);
    x.GetX();
    x.SetY(20);
    x.GetY();

    x.InitMembers(10,20);


    return 0;


}
