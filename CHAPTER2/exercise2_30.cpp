#include <iostream>
using namespace std;

main()
{
    // 顶层const：可以表示任意对象是常量；如果说一个对象是顶层const，就是说这个对象是一个常量
    // 底层const：表示与指针和引用等复合类型的基本类型有关；如果说一个对象是底层const，就是说和这个对象的基本类型是一个常量
    int i = 0;
    int *const ptr1 = &i;         // const修饰指针，p1是常量，顶层const
    const int ci = 42;          // const修饰基本类型，顶层const
    const int *ptr2 = &ci;        // p2是变量，常量是p2指向的对象，所以这个p2是一个底层const

    const int v2 = 0;   // 顶层const
    int v1 = v2;        // 顶层const可以进行拷贝操作，不受影响。
    int *p1 = &v1;
    int &r1 = v1;

    const int *p2 = &v2;        // 从声明可以看出p2是一个底层const，但是v2 是一个顶层const，不受影响
    const int *const p3 = &i;   // 被拷贝对象i是一个变量，执行拷贝操作没有影响
    const int &r2 = v2;         // 引用r2 是一个底层const，被拷贝对象v2是一个顶层const，不受影响

    r1 = v2;            // v2是一个顶层const ，可以随便赋值给任何值
    cout << r1 << endl;

    // p1 = p2;        // p2 是一个底层const，想要让p2赋值给另一个值，这个值必须也是底层const
    p2 = p1;        // p1是一个普通的指针对象，可以赋值给任何值
    cout << *p2 << endl;

    // p1 = p3;    // p3是一个底层const，想要让p3赋值给另一个值，这个值必须也是底层const
    p2 = p3;        // p3是一个底层const（当然也是一个顶层const，这不影响），赋值给p2这个底层const，合理；
    cout << *p2 << endl;

    system("pause");
    return 0;
}