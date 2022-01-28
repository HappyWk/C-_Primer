#include <iostream>
using namespace std;

// 用户输入两个整数，打印这两个整数所指定的范围内的所有整数

void printInteger(int small, int big)
{
    if (small > big)
    {
        printInteger(big, small);
        return;
    }
    while (small <= big)
    {
        cout << small << " ";
        small++;
    }
    cout << endl;
}

int main()
{

    while (true)
    {
        cout << "Please enter two integer: ";
        int num1, num2;
        cin >> num1 >> num2;
        printInteger(num1, num2);

        cout << "Try again? (Y/N) ";
        char answer;
        cin >> answer;
        if(answer == 'N' || answer == 'n')
        {
            break;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}