// 定义一个含有10个元素的vector对象，每一个对象的值均为42
// 请使用三种方法定义
#include <iostream>
#include <vector>
#include <string>
using namespace std;

main()
{
    // way 1
    vector<int> v1(10, 42);
    for (auto i1 : v1)
        cout << i1 << " ";
    cout << endl;

    // way 2
    vector<int> v2(10);
    for (int i = 0; i < 10; i++)
        v2[i] = 42;

    for (auto i2 : v2)
        cout << i2 << " ";
    cout << endl;

    // way 3
    vector<int> v3;
    for (int i = 1; i <= 10; i++)
        v3.push_back(42);

    for (auto i3 : v3)
        cout << i3 << " ";
    cout << endl;

    system("pause");
    return 0;
}