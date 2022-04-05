#include <iostream>
using namespace std;

main()
{
    const int i = 42;

    // 普通变量
    auto j = i;
    j = j + 30;
    cout << j << endl;

    // 底层const
    const auto &k = i;
    
    // 底层const：对常量取值是一个底层const
    auto *p = &i;
    cout << *p << endl;

    // 顶层const
    const auto j2 = i;
    
    // 底层const
    const auto &k2 = i;

    system("pause");
    return 0;
}