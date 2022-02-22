#include <iostream>
using namespace std;

// 含有无符号数类型的表达式

int main()
{
    unsigned u1 = 41, u2 = 42;
    cout << u1 - u2 << endl;
    cout << u2 - u1 << endl;

    int v1 = 10, v2 = 42;
    cout << v1 - v2 << endl;
    cout << v2 - v1 << endl;
    cout << v1 - u1 << endl;
    cout << u1 - v1 << endl;
    system("pause");
    return 0;
}