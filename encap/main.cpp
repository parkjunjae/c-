//
// Created by 박준재 on 2025. 3. 28..
//

#include "main.h"
#include <iostream>
using namespace std;

class SinivelCap {
public:
    void Take() const {
        cout << "콧물이 멎는다." << endl;
    }
};

class SneezeCap {
public:
    void Take() const {
        cout << "재채기가 멎습니다." << endl;
    }
};
class SnuffleCap {
public:
    void Take() const {
        cout << " 코가 뻥 뚫입니다." << endl;
    }
};

class ColdPatient {
public:
    void TakeSinivelCap(const SinivelCap &cap) const {
        cap.Take();
    }
    void TakeSneezeCap(const SneezeCap &cap) const {
        cap.Take();
    }
    void TakeSnuffleCap(const SnuffleCap &cap) const {
        cap.Take();
    }
};

int main(){

    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
    return 0;
}