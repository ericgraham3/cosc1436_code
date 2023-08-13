#include <iostream>
using namespace std;

int main()
{
    cout << "How many donuts did you eat? ";
    int donuts_eaten;
    cin >> donuts_eaten;
    if (donuts_eaten < 0)
    {
        cout << "You ate ";
        cout << donuts_eaten;
        cout << " donuts? That's impossible. Unless...";
    }
    if (donuts_eaten == 0)
    {
        cout << "You ate ";
        cout << donuts_eaten;
        cout << " donuts. ";
    }
    if (donuts_eaten == 1)
    {
        cout << "You ate ";
        cout << donuts_eaten;
        cout << " donut. ";
    }
    if (donuts_eaten > 1 && donuts_eaten < 12)
    {
        cout << "You ate ";
        cout << donuts_eaten;
        cout << " donuts. ";
    }
    if (donuts_eaten%12 == 0 && donuts_eaten >= 12)
    {
        cout << "You ate ";
        cout << donuts_eaten/12;
        cout << " dozen donuts. ";
    }
    if (donuts_eaten%12 != 0 && donuts_eaten >= 12)
    {
        cout << "You ate ";
        cout << donuts_eaten/12;
        cout << " dozen donuts plus "; 
        cout << donuts_eaten%12;
        cout << " individual donuts. ";
    }
    if (donuts_eaten < 0)
        cout << "are you saying I can have your donuts?!?";
    if (donuts_eaten == 0)
        cout << "Don't be shy, we put these donuts on the company card!";
    if (donuts_eaten > 0 && donuts_eaten <= 2)
        cout << "That's reasonable. I sort of went overboard haha.";
    if (donuts_eaten > 2 && donuts_eaten <= 5)
        cout << "Hell yeah, me too, we're crushing donuts today!";
    if (donuts_eaten > 5 && donuts_eaten <= 24)
        cout << "They're good donuts, I get it, but leave some for the rest of the team.";
    if (donuts_eaten > 24)
        cout << "Do you want me to call an ambulance?";
    return 0;
}