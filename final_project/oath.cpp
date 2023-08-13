#include <iostream>
#include <time.h>
#include <windows.h>
// Using a separate header file for the ASCII art
#include"cutting_edge_graphics.h"
// Using a separate header file for dev blog posts and some of the other non-game text
#include"compelling_and_engaging_marketing_content.h"
using namespace std;

// create "clear screen" string
string CLS = "\033[2J\033[1;1H";

// create function to set text color
void setcolor(string C)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    if (C=="gray" || C=="grey" || C=="default")
        SetConsoleTextAttribute(h, 7);
    else if (C=="blue")
        SetConsoleTextAttribute(h, 9);
    else if (C=="green")
        SetConsoleTextAttribute(h, 10);
    else if (C=="cyan")
        SetConsoleTextAttribute(h, 11);
    else if (C=="red")
        SetConsoleTextAttribute(h, 12);
    else if (C=="purple")
        SetConsoleTextAttribute(h, 13);
    else if (C=="yellow")
        SetConsoleTextAttribute(h, 14);
    else if (C=="white")
        SetConsoleTextAttribute(h, 15);
}

int main()
{
    // Step 1: intro screen and menus
    int main_menu = 0;
    int sub_menu = 0;
    while (main_menu != 6)
    {
        // display title banner
        setcolor("red");
        banner_1();
        setcolor("green");
        banner_2();

        // display main menu options
        setcolor("default");
        cout << "1. Play Executioner's Oath Online for free!\n";
        cout << "2. Visit Our In-Game Store for premium cosmetics, extra guesses, and more!\n";
        cout << "3. Developer Blog 08.05.23 - Embracing Simplicity\n";
        cout << "4. Developer Blog 08.06.23 - Unleash the Power of Vowels!\n";
        cout << "5. Credits\n";
        cout << "6. Exit Game\n";
        cout << "Please select an option: ";
        cin >> main_menu;

        // main menu option 1 contains the actual game
        if (main_menu == 1)
        {
            srand(time(NULL));
            // Step 2: select random secret_phrase, I formatted the line breaks and indentation for the "phrases" array to be more readable
            string phrases[20] = 
                {
                    "hearthstone", "world of warcraft", "league of legends", "valorant", "apex legends", 
                    "fornite", "everquest", "eve online", "overwatch", "diablo immortal", 
                    "counter strike global offensive", "star citizen", "final fantasy xiv", "elder scrolls online", "dungeons and dragons online", 
                    "rocket league", "minecraft", "roblox", "genshin impact", "maple story"
                };
            string secret_phrase = phrases[rand()%20];

            // Step 3: create guess_phrase variable
            string guess_phrase = secret_phrase;
            for (int i=0; i<guess_phrase.size(); i++)
            {
                if (secret_phrase[i]== ' ')
                    guess_phrase [i] = ' ';
                else
                    guess_phrase[i] = '?';
            }

            // Step 4: declare variables to count wrong guesses, 
            int wrong_guesses = 0;
            string letter;
            string letters_remaining = "abcdefghijklmnopqrstuvwxyz";

            // Step 5: game loop
            while (guess_phrase != secret_phrase && wrong_guesses < 6)
            {
                // Step 6: display cutting-edge graphics based on number of wrong guesses
                cout << CLS;
                if (wrong_guesses == 1)
                {
                    setcolor("red");
                    wrong_guess_art_1();
                    setcolor("yellow");
                    cout << "You're the only thing left alive on this desolate battlefield.\n";
                }
                else if (wrong_guesses == 2)
                {
                    setcolor("red");
                    wrong_guess_art_2();
                    setcolor("yellow");
                    cout << "Your search leads you to makeshift dais in the center of the carnage.\n";
                }
                else if (wrong_guesses == 3)
                {
                    setcolor("red");
                    wrong_guess_art_3();
                    setcolor("yellow");
                    cout << "You hear movement on the other side of the platform.\n";
                }
                else if (wrong_guesses == 4)
                {
                    setcolor("red");
                    wrong_guess_art_4();
                    setcolor("yellow");
                    cout << "The Executioner approaches...\n";
                }
                else if (wrong_guesses == 5)
                {
                    setcolor("red");
                    wrong_guess_art_5();
                    setcolor("yellow");
                    cout << "Prepare for battle!!!\n";
                }
                else
                {
                    setcolor("red");
                    banner_1();
                    setcolor("yellow");
                    cout << "Guess the secret phrase to avoid The Executioner's Axe!\n";
                }

                // Step 7: display remaining letters
                setcolor("default");
                cout << "Letters remaining: " << letters_remaining << endl;

                // Step 8: display guess_phrase variable
                cout << guess_phrase << endl;
                // Step 9: prompt player to enter a letter and store in variable "letter"
                cout << "Enter a letter: ";
                cin >> letter;
                // remove letter from letters_remaining
                int found = letters_remaining.find(letter,0);
                if (found > -1)
                    letters_remaining.replace(found,1," ");
                // replace all occurences of letter in guess_phrase
                found = secret_phrase.find(letter,0);
                // if guessed letter is not found in secret_phrase, increment wrong_guesses
                if (found > secret_phrase.size())
                    wrong_guesses++;
                else
                    while (found < secret_phrase.size())
                    {
                        guess_phrase.replace(found,1,letter);
                        found = secret_phrase.find(letter,found+1);
                    }
            }
            // end game loop
            // Step 11: display final result
            if (guess_phrase==secret_phrase)
                {
                    cout << CLS;
                    setcolor("white");
                    won_game_art_();
                    cout << "You have defeated The Executioner and recovered his Broken Axe! A Mythic Weaponsmithing Kit, available for purchase from our In-Game Store, is required to restore this mighty weapon!\n";
                    cout << "The secret phrase was: " << guess_phrase << endl;
                }
            else
                {
                    cout << CLS;
                    setcolor("red");
                    lost_game_art_();
                    cout << "You have fallen to The Executioner's Axe! Visit our In-Game Store to purchase additional guesses and continue the battle!\n";
                    cout << "The secret phrase was: " << secret_phrase << endl;
                }
            // sub-menu to take player back to the main menu or exit game
            setcolor("default");
            cout << "1. Return to Main Menu\n";
            cout << "2. Exit Game\n";
            cout << "Please select an option: ";
            cin >> sub_menu;
            if (sub_menu == 1)
                {
                cout << CLS;
                main_menu = 1;
                }
            else
                {
                cout << CLS;
                exit(0);
                }
        }
        if (main_menu == 2)
        {
            cout << CLS;

            // in-game store content
            setcolor("green");
            store_banner();
            setcolor("blue");
            store_down();
            setcolor("white");
            store_art();

            // sub-menu to take player back to the main menu or exit game
            setcolor("default");
            cout << "1. Return to Main Menu\n";
            cout << "2. Exit Game\n";
            cout << "Please select an option: ";
            cin >> sub_menu;
            if (sub_menu == 1)
                {
                cout << CLS;
                main_menu = 1;
                }
            else
                {
                cout << CLS;
                exit(0);
                }  
        }
        if (main_menu == 3)
        {
            cout << CLS;

            // Dev Blog 08.05.23
            setcolor("yellow");
            dev_blog_1();

            // sub-menu to take player back to the main menu or exit game
                setcolor("default");
                cout << "1. Return to Main Menu\n";
                cout << "2. Exit Game\n";
                cout << "Please select an option: ";
                cin >> sub_menu;
                if (sub_menu == 1)
                    {
                    cout << CLS;
                    main_menu = 1;
                    }
                else
                    {
                    cout << CLS;
                    exit(0);
                    }     
        }
        if (main_menu == 4)
        {
            cout << CLS;

            // Dev Blog 08.06.23
            setcolor("yellow");
            dev_blog_2();

            // sub-menu to take player back to the main menu or exit game
                setcolor("default");
                cout << "1. Return to Main Menu\n";
                cout << "2. Exit Game\n";
                cout << "Please select an option: ";
                cin >> sub_menu;
                if (sub_menu == 1)
                    {
                    cout << CLS;
                    main_menu = 1;
                    }
                else
                    {
                    setcolor("default");
                    cout << CLS;
                    exit(0);
                    }     
        }
        if (main_menu == 5)
        {
            cout << CLS;

            // Credits
            setcolor("cyan");
            credits_banner();
            credits();

            // sub-menu to take player back to the main menu or exit game
                setcolor("default");
                cout << "1. Return to Main Menu\n";
                cout << "2. Exit Game\n";
                cout << "Please select an option: ";
                cin >> sub_menu;
                if (sub_menu == 1)
                    {
                    cout << CLS;
                    main_menu = 1;
                    }
                else
                    {
                    setcolor("default");
                    cout << CLS;
                    exit(0);
                    }     
        }
        if (main_menu == 6)
        {
            setcolor("default");
            cout << CLS;
            exit(0);
        }           
    }
    return 0;

}