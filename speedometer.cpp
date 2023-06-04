#include "speedometer.h"

Speedometer::Speedometer(int max_speed):m_max_speed{max_speed}
{
}

void Speedometer::set_max_speed(int user_speed)
{
    m_max_speed = user_speed;
}

int Speedometer::get_max_speed()
{
    return m_max_speed;
}

void Speedometer::set_isKM(bool _isKM)
{
    isKM = _isKM;
}

bool Speedometer::get_isKM()
{
    return isKM;
}

void Speedometer::print()
{
    std::cout << "max_speed: " << m_max_speed << std::endl;
    std::cout << "isKM?: " << isKM << std::endl;

}

int Speedometer::convert_from_KM(int KM)
{
    return KM*1.6;
}

int Speedometer::convert_from_ML(int ml)
{
    return ml / 1.6;
}
