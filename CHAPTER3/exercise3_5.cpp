#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

main()
{
    string str,s1;
    while (cin >> s1)
        str += (s1 + " ");
    cout << str << endl;
    
    system("pause");
    return 0;
}