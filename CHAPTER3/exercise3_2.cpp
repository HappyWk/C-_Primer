#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
// 定义和初始化string对象

main()
{
    // 默认初始化
    string s1;
    cout << s1 << endl;

    // 拷贝初始化：使用等号的方法对string对象进行初始化
    string s2 = "hello world!";
    string s3 = s2;
    cout << s2 << "\t" << s3 << endl;

    // 直接初始化：不适用等号对string对象初始化的方式
    string s4("hello Cpp!");
    string s5(s4);
    cout << s4 << "\t" << s5 << endl;

    system("pause");
    return 0;
}