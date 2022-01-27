#include <iostream>
using namespace std;

// 求50到100的整数相加

int main()
{
    int sum = 0, num1 = 50;
    while (num1 <= 100)
    {
        sum += num1;
        num1++;
    }
    cout << "Sum of 50 to 100 inclusive is "
         << sum << endl;
    system("pause");
    return 0;
}