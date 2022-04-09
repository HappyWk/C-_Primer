#include <iostream>
using namespace std;

main()
{

    int a = 5 + 10 * 20 / 2;
    int b = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << b << endl;
    cout << a << endl;
    cout << "===================" << endl;
    int aa = -30 * 3 + 21 / 5;
    int bb = -30 + 3 * 21 / 5;
    int cc = 30 / 3 * 21 % 5;
    int dd = -30 / 3 * 21 % 4;
    cout << aa << " " << bb << " " << cc << " " << dd << " " << endl;
    cout << "===================" << endl;
    int val = 0;
    cin >> val;
    if (val % 2 == 0)
        cout << "even number" << endl;
    else if (val % 2 == 1)
        cout << "odd number" << endl;
        
    system("pause");
    return 0;
}