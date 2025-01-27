/*Program File Name: Chapter2Exercise10
Programmer: Patrick Liao
Date: 1.26.2025
Requirements: Calculate a car's mpg given a user inputed tank capacity and range. Display the result. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tankvol;
    double range;
   

    cout << "Please enter your car's tank capacity: ";                                                                           //prompt user for tankvol
    cin >> tankvol;
    cout << "Please enter your car's maximum range: ";                                                                           //prompt user for range
    cin >> range;

    double mpg = range / tankvol;                                                                                                //calculate mpg

    cout << "Your car's miles-per-gallon is " << mpg << endl;                                                                    //display results
    return 0;

}