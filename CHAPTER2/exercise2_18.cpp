#include <iostream>
using namespace std;

// 指针

int main()
{
    int u = 20;
    int i = 30;
    int *pointer = &u;
    cout << *pointer << endl;
    // 改变指针的值
    pointer = &i;
    cout << *pointer << endl;

    // 改变指针所指对象的值
    *pointer = 25;
    cout << "i = " << i << "\t*pointer = " << *pointer << endl;

    system("pause");
    return 0;
}