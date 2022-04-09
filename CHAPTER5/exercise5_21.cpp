#include <iostream>
#include <string>
using namespace std;

main()
{
    string pre_str, now_str;
    while (cin >> now_str)
    {
        if (isupper(now_str[0]) && pre_str == now_str)
        {
            break;
        }
        pre_str = now_str;
    }

    system("pause");
    return 0;
}