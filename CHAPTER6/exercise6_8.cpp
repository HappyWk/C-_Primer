#include <iostream>
using namespace std;
#include "Chapter6.h"
#include "Chapter6.cpp"

int fact1(int x)
{
    int output = 1;
    for(;x >= 1;--x)
        output *= x;
    return output;
}

main()
{
    cout << fact1(10) << endl;
    cout << fact(10) << endl;
    system("pause");
    return 0;
}