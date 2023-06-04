#include <iostream>
#include "speedometer.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

   Speedometer* speed = new Speedometer(250);

   speed->set_max_speed(800);

   speed->print();


   if (speed != NULL){
        delete speed;
   }

    return 0;
}
