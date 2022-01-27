#include <iostream>
using namespace std;

// 用户输入两个整数，打印这两个整数所指定的范围内的所有整数

int main()
{
    cout << "Please enter two integer: ";
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 <= num2)
    {
        while (num1 <= num2)
        {
            cout << num1 << " ";
            num1++;
        }
        cout << endl;
    }
    else
    {
        while (num2 <= num1)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}