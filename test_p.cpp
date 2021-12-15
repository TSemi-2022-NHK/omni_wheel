//
// Created by Kazuma Nagatsuka on 2021/12/15.
//
//値代入してテスト
#include "omni_wheel.h"
#include <iostream>

using namespace std;

int main() {
    float v = 20;
    float direction = 90;
    float w = 0;

    wheel wheel_cal;
    wheel_cal.motor_main(v,direction,w);

    cout << wheel_cal.Motor[0] << ","<< wheel_cal.Motor[1] << ","<< wheel_cal.Motor[2] << ","<< wheel_cal.Motor[3] << endl;
    return 0;
}

