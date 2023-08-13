#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("lotto.txt");
    int N, Count = 0, Sum = 0, Avg = 0;
    int Frequency[55] = {0};
    while (!fin.eof())
    {
        fin >> N;
        Frequency[N]++;
        Count++;
        Sum += N;
    }
    Count--;
    Sum -= N;
    Avg = Sum/Count;
    cout << "Statistics for Lotto Texas (1992 - present)\n";
    cout << "Total Numbers: " << Count << endl;
    cout << "Sum of these numbers: " << Sum << endl;
    cout << "Average of these numbers: " << Avg << endl;
    /*
    For some reason, when I compile this the next part prints out all sorts of crazy values for numbers over 55. 
    It did this before I added the variable for Avg, when my code matched the code from the lecture video exactly. 
    I'm not sure if this is an issue with my compiler or if there's some error in my code, but I couldn't get it to match your results.
    I promise I didn't just copy your code without testing! I tested along the way, I tried pasting 55 "0"s into the array. I started googling and then got pressed for time.
    When I reviewed the homework on the website I saw the part about average and added that back in, so I don't think that broke my output for the "for" loop. 
    */
    for (int i = 1; 1 <= 54; i++)
    {
        cout << i << " " << Frequency[i] << endl;
    }
    return 0;
}