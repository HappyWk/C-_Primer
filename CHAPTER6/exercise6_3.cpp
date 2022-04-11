#include <iostream>
using namespace std;

// 利用递归的思想编写阶乘函数
int fact(int x)
{
    if (x == 1)
        return x;
    else
        return x * fact(x - 1);
}

main()
{
    long int cc = fact(31);
    cout << cc << endl;

    system("pause");
    return 0;
}