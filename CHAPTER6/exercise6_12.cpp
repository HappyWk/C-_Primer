#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b; 
    b = temp;
}

main()
{
    int a = 10,b = 20;
    swap(a,b);
    cout << a << " " << b << endl;
    system("pause");
    return 0;
}