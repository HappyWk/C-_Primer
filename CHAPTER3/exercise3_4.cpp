#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

main()
{
    // 编写一段程序，读入两个字符串，比较是否相等并输入结果，如果不相等输出比较大的那个字符串
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "True!" << endl;
    else
        cout << ((s1 > s2) ? s1 : s2) << endl;
    
    // 改写程序，比较输入的两个字符串是否等长，如果不等长，输出长度比较大的那个字符串
    string s3,s4;
    cin >> s3 >> s4;
    if(size(s3) == size(s4))
        cout << "True!" << endl;
    else
        cout << ((size(s3) > size(s4)) ? s3:s4) << endl;

    system("pause");
    return 0;
}