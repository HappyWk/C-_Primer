#include <iostream>
using namespace std;

// 指向指针的指针
// 指向指针的引用

int main()
{
    // 指向指针的指针
    int a = 10;
    int *p = &a;
    int **pp = &p;
    cout << "direct value: "<< a <<endl;
    cout << "indirect value: " << *p << endl;
    cout << "double indirect value:  " << **pp << endl;

    // 指向指针的引用
    int b = 10;
    int *pi = &b;
    int *&r = pi;
    *r = 23;
    cout << *r << endl;

    system("pause");
    return 0;
}