#include <iostream>
using namespace std;

int A = 25; //global variable, avoid this as much as you can, as code gets large you might want the same var name in a specific function
// variable scope: are they local or global???

//overloading functions; can have multiple functions of the same name if they have different parameters, either in type of parameters (float vs. int, etc). or number of parameters (2 or 3 args)

int cube (int N)
{
    return N*N*N;
}

int main()
{
    cout << cube(4) << endl;
    return 0;
}