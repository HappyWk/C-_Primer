#include <iostream>
#include <cassert>
using namespace std;

// 内联函数
inline bool is_Shorter(const string &str1,const string &str2)
{
    cout << __func__ << endl;
    return str1.size() < str2.size();
}

main()
{
    string str1 = "nihao";
    string str2 = "hello world";
    assert(str1.size() > 10);       // 如果条件为真，什么也不做；如果条件为假，终止程序运行。
    cout << is_Shorter(str1,str2) << endl;
    system("pause");
    return 0;
}