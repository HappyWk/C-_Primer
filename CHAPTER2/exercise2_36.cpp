#include <iostream>
using namespace std;

main()
{
    int a = 3,b = 4;

    // c是一个整型变量
    decltype(a) c;

    // d是一个整型变量的引用,必须初始化
    decltype((a)) d = a;
    d = d  + 2;
    cout << a << endl;

    c = 2;
    cout << ++c << endl;

    system("pause");
    return 0;
}