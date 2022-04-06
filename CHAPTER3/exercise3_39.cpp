#include <iostream>
#include <string>
#include <cstring>
using namespace std;

main()
{
    // 比较两个string对象，直接利用关系运算符就可以
    string str1;
    string str2;
    cin >> str1 >> str2;
    if (str1 == str2)
    {
        cout << "Same string." << endl;
    }
    else if (str1 > str2)
    {
        cout << str1 << " > " << str2 << endl;
    }
    else
    {
        cout << str1 << " < " << str2 << endl;
    }

    // 比较C风格字符串，使用strcmp
    char c1[] = "nihao";
    char c2[] = "nihaoa";
    if (strcmp(c1, c2) == 0)
    {
        cout << "Same string." << endl;
    }
    else if (strcmp(c1, c2) > 0)
    {
        cout << c1 << " > " << c2 << endl;
    }
    else
    {
        cout << c1 << " < " << c2 << endl;
    }

    system("pause");
    return 0;
}