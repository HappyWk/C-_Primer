#include <iostream>
using namespace std;

main()
{
    const int val = 20;
    const int &ref = val;

    // 对const的引用：1、常量引用可以引用变量；2、引用变量的常量引用，引用自身因为是常量引用无法更改，但是变量可以更改；
    int val_1 = 34;
    const int &ref_1 = val_1;
    val_1 = 32;
    cout << ref_1 << endl;

    const int val_2 = 34;

    const int &ref_2 = 80;
    cout << ref_2 << endl;

    system("pause");
    return 0;
}