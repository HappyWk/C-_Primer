#include <iostream>
using namespace std;

main()
{
    // 指向常量的指针：说的是这个指针所指的对象是常量，不能对指针所指的对象的值进行更改（当然这是指针的“自以为是”）
    int val_1 = 23;
    const int val_2 = 24;
    const int *ptr_1 = &val_1;
    const int *ptr_2 = &val_2;
    cout << *ptr_1 << endl;
    cout << *ptr_2 << endl;

    // const指针：说的是这个指针是一个常量，也就是说，当这个指针初始化一个对象的地址之后。指针就不能被其他的地址赋值了
    int val_3 = 34;
    int val_4 = 35;
    int * const ptr_3 = &val_3;
    cout << *ptr_3 << endl;
    // ptr_3 = &val_4;      这个语句是错的，因为ptr_3 是一个const pointer ,不能被其他地址赋值

    system("pause");
    return 0;
}