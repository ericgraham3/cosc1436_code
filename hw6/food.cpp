#include<iostream>
using namespace std;
#include"geometry.h"

int main()
{
    int Apples, Pizzas, Donuts, Cones;

    cout << "How many apples did you eat?";
    cin >> Apples;
    cout << "How many pizzas did you eat?";
    cin >> Pizzas;
    cout << "How many donuts you eat?";
    cin >> Donuts;
    cout << "How many ice cream cones did you eat?";
    cin >> Cones;
    float TotalVolume = Apples*VolSphere(1.5) + Pizzas*VolCylinder(6,.5) + Donuts*VolDonut(1.5,0.5) + Cones*VolCone(1,5) + Cones*VolSphere(1.25);
    cout << "You ate " << TotalVolume << " cubic inches of food. "; 
    if (TotalVolume < 91.5055)
        cout << "Are you still hungry?";
    else if (TotalVolume > 91.5055 && TotalVolume < 183.011)
        cout << "But I ate more!";
    else
        cout << "That was quite a meal, we're getting our money's worth out of this buffet!";

    return 0;
}
 