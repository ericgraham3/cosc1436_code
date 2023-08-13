#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int N1,N2,N3,N4,N5,N6;
    N1 = rand()%50+1;
    N2 = rand()%50+1;
    while (N2 == N1)
    {
        N2 = rand()%50+1;
    }
    N3 = rand()%50+1;
    while (N3 == N1 || N3 == N2)
    {
        N3 = rand()%50+1;
    }
    N4 = rand()%50+1;
    while (N4 == N1 || N4 == N2 || N4 == N3)
    {
        N4 = rand()%50+1;
    }
    N5 = rand()%50+1;
    while (N5 == N1 || N4 == N2 || N4 == N3 || N5 == N4)
    {
        N5 = rand()%50+1;
    }
    N6 = rand()%50+1;
    while (N6 == N1 || N6 == N2 || N6 == N3 || N6 == N4 || N6 == N5)
    {
        N6 = rand()%50+1;
    }    
    cout << "Here is your Lotto Texas quick pick: " << N1 << " " << N2 << " "  << N3 << " " << N4 << " " << N5 << " " << N6 << endl;
    string Statements[5] = {"\"They ask you concerning wine and gambling. Say: 'In them is great sin, and some profit, for men; but the sin is greater than the profit.'\" - Quran 2:219", "\"In gambling, the many must lose in order that the few may win.\" - George Bernard Shaw", "\"If you can't spot the sucker in your first half hour at the table, then you ARE the sucker.\" - Rounders (1998), dir. John Dahl", "\"Never tell me the odds.\" - The Empire Strikes Back (1980), dir. Irvin Kershner", "\"Lottery: A tax on people who are bad at math.\" - Ambrose Bierce"};
    cout << Statements[rand()%5] << endl;
    return 0;
}