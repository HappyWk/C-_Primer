#include <iostream>
using namespace std;

// 复合类型、常量和auto

int main()
{
    int i = 0;
    int &r = i; // r是对整型i的引用
    auto a = r; // 定义一个类型，用引用r所对应的对象来初始化    a = 0
    cout << "a = " << a << endl
         << endl;

    // auto会忽略顶层const
    const int ci = i, &cr = ci;
    auto b = cr; // b只是一个整数，ci的顶层const的性质被忽略，b的值可以改变
    b = cr + 5;
    cout << "b = " << b << endl
         << endl;

    auto d = &i; //将i的地址赋给d，所以d的类型是int* 指针类型（复合类型）
    cout << "*d = " << *d << endl
         << endl;

    auto e = &ci; // ci是一个整型常量，所以e是一个指向整型常量的指针
    cout << "e = " << *e << endl
         << endl;
    // cout << ++(*e) <<endl;

    auto &g = ci; // g是一个整型常量的引用
    cout << "g = " << g << endl
         << endl;

    system("pause");
    return 0;
}