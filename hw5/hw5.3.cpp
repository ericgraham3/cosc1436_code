#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string word, reverse; 
    cout << "Enter a word to test for palindrome: ";
    cin >> word;
    for (int i=word.size()-1; i>=0; i--)
    {
        reverse += word[i];
    }
    cout << "Your word in reverse: " << reverse << endl;
    if (word == reverse)
    {
        cout << "Your word is a palindrome.\n";
    }
    if (word != reverse)
    {
        cout << "Your word is not a palindrome.\n";
    }
    return 0;
}