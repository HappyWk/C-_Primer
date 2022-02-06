#include <iostream>
using namespace std;

// 对于无符号类型，如果输入了一个有符号数，系统会自动按照给定规律分配一个无符号数

int main()
{
    // 对于无符号数，如果赋值为一个负数，编译器会将这个类型的最大值和这个负数的模，然后输出
    unsigned char c = -3;
    cout << (int)c << endl;

    // 无符号整数
    unsigned u1 = 10, u2 = 23;
    cout << u2 - u1 << endl;
    cout << u1 - u2 << endl;

    // 无符号数和有符号数混用
    int i1 = 10, i2 = 23;
    cout << i2 - i1 << endl;
    cout << i1 - i2 << endl;
    cout << u2 - i1 << endl;
    cout << i1 - u2 << endl;
    system("pause");
    return 0;
}