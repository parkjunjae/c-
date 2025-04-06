//
// Created by 박준재 on 2025. 4. 3..
//

#ifndef MAIN_H
#define MAIN_H

class Point {
private:
	int x, y;
public:
  Point(const int &xpos, const int &ypos);
  int GetX() const;
  int GetY() const;
  bool SetX(int xpos);
  bool SetY(int ypos);

};




#endif //MAIN_H
