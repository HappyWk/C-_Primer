#include <iostream>
using namespace std;
// 类型别名
typedef int nihao;
typedef int *nihaoya;

main()
{
    // 类型别名的使用
    nihao val = 34;
    cout << val << endl;
    nihaoya p1 = &val;
    cout << *p1 << endl;

    // auto类型说明符：让编译器自己分析表达式所属的类型
    auto val_1 = val + *p1;
    cout << val_1 << endl;

    // auto类型说明符
    int i = 0; int &r = i;
    const int ci = i;   // 顶层const
    const int &cr = ci;
    auto a = r;
    a = 99;
    cout << a << endl;
    auto b = ci;    // ci的顶层const特性被忽略掉了，b是一个变量
    b = 100; 
    cout << b << endl;
    auto c = cr;        // cr是底层const，也就是说，cr所引用的ci是一个顶层const，所以顶层const被忽略掉，c是一个变量
    c = 100;
    cout << c << endl;
    auto d = &i;    // d是一个普通指针
    cout << *d << endl;
    auto e = &ci;       // 对常量对象取地址是一种底层const
    cout << *e << endl;

    system("pause");
    return 0;
}