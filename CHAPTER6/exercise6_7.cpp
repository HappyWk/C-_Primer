#include <iostream>
using namespace std;

int test()
{
    static int v = 0;
    return v++;
}

int test1()
{
    int v = 0;
    return v++;
}

main()
{
    for (int i = 1; i <= 10; ++i)
        cout << test() << " ";
    cout << endl;

    for (int i = 1; i <= 10; ++i)
        cout << test1() << " ";
    cout << endl;

    system("pause");
    return 0;
}