//
// Created by 박준재 on 2025. 3. 24..
//

#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    bool InitMembers(int xpos, int ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
};


#endif //MAIN_H
