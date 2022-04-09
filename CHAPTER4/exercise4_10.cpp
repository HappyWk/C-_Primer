#include <iostream>
using namespace std;

main()
{
    // int val;
    // while (cin >> val && val != 42)
    cout << "===================" << endl;
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
        cout << "correct enter" << endl;

    system("pause");
    return 0;
}