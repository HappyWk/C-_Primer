#include <iostream>
using namespace std;

main()
{
    int val;
    cin >> val;
    // cout << val << endl;
    // cout << cin.good() << endl;

    // while(cin >> val)
    // {
        cout << val << endl;
        cout << "cin.fail()" << cin.fail() << endl;
        cout << "cin.good()" << cin.good() << endl;
        cin.clear();
        cout << "cin.fail()" << cin.fail() << endl;
        cout <<  "cin.good()" << cin.good() << endl;
    // }

    system("pause");
    return 0;
}