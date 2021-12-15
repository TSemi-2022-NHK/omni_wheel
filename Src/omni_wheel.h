//
// Created by Kazuma Nagatsuka on 2021/12/12.
//

#ifndef omni_wheel_h
#define omni_wheel_h

class wheel {
public:
    wheel();
    double Motor[4];//各タイヤの各速度
    void motor_main(float v, float direction, float w);

private:
    double l = 0.3;//機体中心から各タイヤまでの距離[m]
    double r = 0.08;//タイヤの半径[m]
};

#endif //omni_wheel_h
