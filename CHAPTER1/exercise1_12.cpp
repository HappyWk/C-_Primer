#include <iostream>
using namespace std;

main()
{
    int sum = 0;
    for (int i = -100; i <= 100; i++)
        sum += i;
    cout << sum << endl;

    system("pause");
    return 0;
}