#include <iostream>
using namespace std;

int main()
{
    const int i = 42; // 定义一个整型常量i
    auto j = i;       // 定义普通变量j，i的顶层const被忽略掉了
    j += 2;
    cout << "j = " << j << endl
         << endl;

    const auto &k = i; // 定义一个整型常量的引用k，k是常量,k是 const int 的引用
    cout << "k = " << k << endl
         << endl;

    auto *p = &i; // p是const int *
    cout << *p << endl;

    system("pause");
    return 0;
}