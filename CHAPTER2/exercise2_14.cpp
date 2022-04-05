#include <iostream>
using namespace std;

main()
{
    int val = 521, sum = 0;
    for (int val = 1; val <= 10; val++)
    {
        sum += val;
        cout << val << " ";
    }
    cout << endl;
    cout << "val = " << val << " sum = " << sum << endl;
    system("pause");
    return 0;
}