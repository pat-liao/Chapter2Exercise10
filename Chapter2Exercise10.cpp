/*Program File Name: Chapter2Exercise10
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: Calculate a car's mpg given 15 gal capacity and 375 mile range. Display the result. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tankvol = 15;
    double range = 375;
    double mpg = range / tankvol; 
    cout << "A car with " << tankvol << " gallon capacity that travels a maximum of " << range << " miles has a miles-per-gallon of " << mpg << "." << endl;
    
    return 0;

}