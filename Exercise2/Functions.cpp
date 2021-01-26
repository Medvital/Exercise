#include <iostream>
#include "constants.h"

using std::cout; using std::cin;

void calculateOfFallingTime(double hei)
{
    int count = 0;
    double dist, currHei;
    for (count; ; count++)
    {
        dist = constants::Grav_g * ((static_cast<double>(count) * count) / 2);
        currHei = hei - dist;
        if (currHei > 0)
            cout << "At " << count << " seconds, the ball is at height :  " << currHei << " meters\n";
        else
        {
            cout << "At " << count << " seconds, the ball is on the ground.\n";
            break;
        }
    }


}