//
// Created by 박준재 on 2025. 4. 3..
//

#include "main.h"
#include <iostream>
using namespace std;

Point::Point(const int &xpos, const int &ypos) {
    x = xpos;
    y = ypos;
}


int Point::GetX() const {
    return x;
}

int Point::GetY() const {
    return y;
}

bool Point::SetX(int xpos) {
    if (xpos > 100 || xpos < 0) {
        cout << "벗어난 범위이다." << endl;
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos) {
    if (ypos > 100 || ypos < 0) {
        cout << "벗어난 범위이다." << endl;
        return false;
    }
    y = ypos;
    return true;
}





int main(void){
    Point p(10,20) ;

    cout << "x : "<< p.GetX() << "이다" << endl;
    cout << "y : "<< p.GetY() << "이다" << endl;
    cout << "x 값은 :" << p.SetX(110) << "이다" << endl;
    cout << "y 값은 :" << p.SetY(40) << "이다" << endl;

    return 0;
}

