#include <iostream>
using namespace std;

// 使用递减运算符打印10到0之间的整数

int main()
{

    int num1 = 10;
    while(num1 >= 0)
    {
        cout << num1 << " ";
        num1--;
    }
    cout << endl;
    system("pause");
    return 0;
}