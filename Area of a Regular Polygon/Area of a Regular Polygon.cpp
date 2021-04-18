// This program will calculate the area of a regular polygon

#include <iostream>
using namespace std;

int main()
{
    //n = number of sides
    //s = length of a side
    //area = (n*s^2)/(4*tan(PI/n))

    double n, s, area;
    const double PI = 3.14159;

    cout << "This program will calculate the area of a regular polygon\n\n";
    cout << "Enter the number of sides: ";
    cin >> n;
    cout << "Enter the length of a side: ";
    cin >> s;

    area = (n * pow(s, 2)) / (4 * tan(PI / n));

    cout << "\nThe area of the polygon is " << area << "\n";
}