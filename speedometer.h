#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H
#include <iostream>

class Speedometer
{
public:
    Speedometer(int max_speed);

    void set_max_speed(int user_speed);
    //get
    int get_max_speed();

    //set isKM
    void set_isKM(bool _isKM);
    //get Is KM
    bool get_isKM();
    //---
    void print();
    int convert_from_KM(int km);
    int convert_from_ML(int ml);

private:
    const int m_min_speed{0};
    char color[7]; //hex
    int m_max_speed;
    bool isKM{true};
};

#endif // SPEEDOMETER_H
