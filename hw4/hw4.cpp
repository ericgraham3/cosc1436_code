#include <iostream>
using namespace std;
int main()
{
    int menu_choice = 0;
    while (menu_choice != 4)
    {
        cout << "\n";
        cout << "~~~~~~~~~~Welcome to the Everyday Value Utility Suite 2023 Edition (EVUS23)~~~~~~~~~~\n";
        cout << "1. Take care of some business with the Highly Accurate C++ Metric Conversion Calculator (HACMCC)\n";
        cout << "2. Join me at the vending machine for a quick user survey about pocket change\n";
        cout << "3. Immerse yourself in 2023's hottest gaming platform, the Pattern Output Amusement Generator (POAG)\n";
        cout << "4. Exit EVUS23\n";
        cout << "Please select an option: ";
        cin >> menu_choice;
        if (menu_choice == 1)
        {
            int program_1_choice = 0;
            cout << "Thank you for using the Highly Accurate C++ Metric Conversion Calculator (HACMCC).\n";
            cout << "1. Convert Fahrenheit to Celsius\n";
            cout << "2. Convert miles to kilometers\n";
            cout << "3. Convert pounds to kilograms\n";
            cout << "4. Exit HACMCC\n";
            cout << "Please select an option: ";
            cin >> program_1_choice;
            if (program_1_choice == 1)
            {
                float fahrenheit_input = 0;
                float celsius_output = 0;
                cout << "Enter the temperature, in Fahrenheit, that you want to convert to Celsius: ";
                cin >> fahrenheit_input;
                celsius_output = 5*(fahrenheit_input-32)/9;
                cout << "That's " << celsius_output << " degrees Celsius.\n";
                program_1_choice = 0;
            }
            if (program_1_choice == 2)
            {
                float miles_input = 0;
                float km_output = 0;
                cout << "Enter the distance, in miles, that you want to convert to kilometers: ";
                cin >> miles_input;
                km_output = (1.609344*miles_input);
                cout << "That's " << km_output << " kilometers.\n";
                program_1_choice = 0; 
            }
            if (program_1_choice == 3)
            {
                float pounds_input = 0;
                float kg_output = 0;
                cout << "Enter the weight, in pounds, that you want to convert to kilograms: ";
                cin >> pounds_input;
                kg_output = (0.45359237*pounds_input);
                cout << "That's " << kg_output << " kilograms.\n";
                program_1_choice = 0; 
            }
            if (program_1_choice == 4)
                menu_choice = 0;
        }
        if (menu_choice == 2)
        {
            int input_pennies = 0;
            int input_nickles = 0;
            int input_dimes = 0;
            int input_quarters = 0;
            cout << "How many pennies do you have? ";
            cin >> input_pennies;
            cout << "How many nickels do you have? ";
            cin >> input_nickles;
            cout << "How many dimes do you have? ";
            cin >> input_dimes;
            cout << "How many quarters do you have? ";
            cin >> input_quarters;
            float coin_total = (input_pennies*.01) + (input_nickles*.05) + (input_dimes*.10) + (input_quarters*.25);
            cout << "The dollar value of those coins is $" << coin_total << endl;
            if (coin_total < 0)
                cout << "If the vending machine ate your coins we can't give you a refund, you need to call the number on the side of the machine.\n";
            if (coin_total > 0 && coin_total < 0.5)
                cout << "You don't have enough for anything in the vending machine, but it takes cards. Do you have a card? Can I see it?\n";
            if (coin_total >= 0.5 && coin_total < 1.5)
                cout << "You can't get a drink but you can get any snack you want.\n";
            if (coin_total >= 1.5 && coin_total < 1.95)
                cout << "You can get a soda or a snack, but not both.\n";
            if (coin_total >= 1.95 && coin_total < 5)
                cout << "You can get a soda and a snack, that's basically lunch!\n";
            if (coin_total >= 5)
                cout << "Can I borrow some change for a Diet Coke?\n";
            menu_choice = 0;
        }
        if (menu_choice == 3)
        {
            int program_3_choice = 0;
            cout << "Thank you for using the Pattern Output Amusement Generator (POAG).\n";
            cout << "1: Print every fifth number. PLEASE NOTE that this free-to-play version of POAG is limited to integers between 100 and 500. Visit our website to purchase the other multiples of 5!\n";
            cout << "2: Print ten ascending rows of up to asterisks.\n";
            cout << "3: Print ten descending rows of ten or less dollar symbols.\n";
            cout << "4: Exit POAG\n";
            cout << "Please select an option: ";
            cin >> program_3_choice;
            if (program_3_choice == 1)
            {
                cout << "~~ Pattern 1 ~~\n";
                for (int pattern_1_value = 105; pattern_1_value <= 500; pattern_1_value = pattern_1_value + 5)
                {
                    cout << pattern_1_value << " ";
                    if (pattern_1_value%100 == 0)
                        cout << endl;
                }
            }
            if (program_3_choice == 2)
            {
                cout << "~~ Pattern 2 ~~\n";
                for (int pattern_2_value_1 = 1; pattern_2_value_1 <= 10; pattern_2_value_1++)
                {
                    for (int pattern_2_value_2 = 1; pattern_2_value_2 <= pattern_2_value_1; pattern_2_value_2++)
                    {
                        cout << "* ";
                    }
                        cout << endl;
                }
            }
            if (program_3_choice == 3)
            {
                cout << "~~ Pattern 3 ~~\n";
                for (int pattern_3_value_1 = 10; pattern_3_value_1 >= 1; pattern_3_value_1--)
                {
                    for (int pattern_3_value_2 = 1; pattern_3_value_2 <= pattern_3_value_1; pattern_3_value_2++)
                    {
                        cout << "$ ";
                    }
                        cout << endl;
                }
            }
            if (program_3_choice == 4)
                menu_choice = 0;
        }
    }
    return 0;
}