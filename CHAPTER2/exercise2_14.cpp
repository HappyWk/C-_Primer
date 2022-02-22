#include <iostream>
using namespace std;

// 作用域

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        sum += i;
    }
    cout << "i = " << i << "\nsum = " << sum << endl;
    system("pause");
    return 0;
}