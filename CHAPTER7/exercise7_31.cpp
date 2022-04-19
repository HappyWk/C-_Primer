#include <iostream>
using namespace std;

// 类的前向声明：一种不完全类型，目的是为了说明有这个类
class Y;

class X
{
private:
    Y *y = nullptr;
};

class Y
{
private:
    X x;
};

main()
{

    system("pause");
    return 0;
}