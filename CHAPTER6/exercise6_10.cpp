#include <iostream>
using namespace std;

// 指针作为函数形参
void swap(unsigned int *p1,unsigned int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

main()
{
    unsigned int a = 10,b = 20;
    swap(&a,&b);
    cout << a << " " << b << endl;
    system("pause");
    return 0;
}