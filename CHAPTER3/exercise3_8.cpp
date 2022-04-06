#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

main()
{
    string str;
    cin >> str;
    cout << str << endl;
    for(int i = 0;i < size(str);i++)
        str[i] = 'X';
    cout << str << endl;

    system("pause");
    return 0;
}