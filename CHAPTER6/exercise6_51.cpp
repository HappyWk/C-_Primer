#include <iostream>
using namespace std;

void f()
{
    cout << "1 void f()" << endl;
}

void f(int)
{
    cout << "2 void f(int)" << endl;
}

void f(int ,int )
{
    cout << "3 void f(int ,int )" << endl;
}

void f(double, double = 3.14)
{
    cout << "4 void f(double, double = 3.14)" << endl;
}

main()
{
    f(2.56,42.0);
    f(42);
    f(42,0);
    f(2.56,3.14);
    system("pause");
    return 0;
}