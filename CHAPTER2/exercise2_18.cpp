#include <iostream>
using namespace std;

main()
{
    int val_1 = 42 ,val_2 = 23;
    int *p1 = &val_1 ,*p2 = p1;

    // 更改指针的值
    // p1和p2都是指针，他们的值现在都存放的是val_1的地址
    // 接下来要将p2的值改变为val_2的地址
    p2 = &val_2;
    cout << *p2 << endl;

    // 更改指针指向对象的值
    int b = 100;
    *p2 = b;
    cout << *p2 << endl;
    

    system("pause");
    return 0;
}