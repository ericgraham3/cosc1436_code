#include <iostream>
using namespace std;
int main()
{
    cout << "This program calculates the sum and product of three numbers.\n";
    float first_number, second_number, third_number;
    cout << "Enter the first number: "; 
    cin >> first_number;
    cout << "Enter the second number: "; 
    cin >> second_number;
    cout << "Enter the third number: "; 
    cin >> third_number;
    cout << "The sum of these three numbers is " << first_number + second_number + third_number << endl;
    cout << "The product of these three numbers is " << first_number * second_number * third_number << endl;
}