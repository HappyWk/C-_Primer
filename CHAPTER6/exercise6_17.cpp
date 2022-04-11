#include <iostream>
using namespace std;

// 这里函数不会改变形参，使用常量引用
bool have_upper(const string &str)
{
    for (auto s : str)
    {
        if(isupper(s))
            return true;
    }
    return false;
}

string toUpper(string &str)
{
    for(auto &s :str)
    {
        s = toupper(s);
    }
    return str;
}

main()
{
    string str = "nihao";
    cout << toUpper(str) << endl;
    cout << have_upper("nihao") << endl;
    system("pause");
    return 0;
}