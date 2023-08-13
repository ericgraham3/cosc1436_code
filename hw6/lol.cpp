#include<iostream>
#include<string>
using namespace std;

string LOLSpeak(string S, string Abbr, string Translation)
{
    int found = S.find(" "+Abbr+" ", 0);
    if (found != -1)
        S.replace(found, Abbr.size()+2, " "+Translation+" ");
    return S;
}

int main()
{
    cout << "Enter a sentence to correct: ";
    string S;
    getline(cin,S);
    S = LOLSpeak(S, "u", "you");
    S = LOLSpeak(S, "lol", "laughing out loud");
    S = LOLSpeak(S, "brb", "be right back");
    S = LOLSpeak(S, "bio", "bathroom");
    S = LOLSpeak(S, "wtf", "what the fudge");
    S = LOLSpeak(S, "idk", "I don't know");
    S = LOLSpeak(S, "idgaf", "I don't give a fudge");
    S = LOLSpeak(S, "tbh", "to be honest");
    S = LOLSpeak(S, "fomo", "fear of missing out (not clinically significant)");
    S = LOLSpeak(S, "nbd", "no big deal");
    cout << S << endl;

    return 0;
}