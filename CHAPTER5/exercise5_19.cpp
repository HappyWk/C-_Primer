#include <iostream>
#include <string>
using namespace std;

main()
{
    string str1,str2;
    cout << "Enter two strings: " << endl;
    cin >> str1 >> str2;
    do
    {
        if(size(str1) < size(str2))
            cout << str1 << endl;
        else
            cout << str2 << endl;

        cout << "Enter two strings: " << endl;
    } while (cin >> str1 >> str2);
    

    system("pause");
    return 0;
}