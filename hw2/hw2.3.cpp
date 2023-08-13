#include <iostream>
using namespace std;
int main()
{
    cout << "This calculates the area of a circle, volume of a sphere, and surface area of a sphere.";
    float radius;
    const float pi = 3.1415;
    cout << endl;
    cout << "Enter a radius in inches: "; 
    cin >> radius;
    cout << "Area of a circle is " << pi * radius * radius;
    cout << " square inches\n";
    cout << "Volume of a sphere is " << (4 * pi * radius * radius * radius)/3;
    cout << " cubic inches\n";
    cout << "Surface area of a sphere is " << 4 * pi * radius * radius;
    cout << " square inches\n";
}