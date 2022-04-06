#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
// string对象上的操作

main()
{
    // 读写string对象
    // string s1;
    // cin >> s1;
    // cout << s1 << endl;

    // 读取未知数量的string对象
    // string s2;
    // while (cin >> s2)
    //     cout << s2 << " ";
    // cout << endl;

    // 使用getline读取一整行作为一个string对象
    // string s3;
    // while (getline(cin,s3))
    // {
    //     if(size(s3) > 5)
    //         cout << s3 << endl;
    // }

    // string::size_type类型：Cpp标准库中string类配套的类型，肯定的是，这个类型是一个无符号的值
    string s4;
    getline(cin,s4);
    auto length = size(s4);
    cout << s4 << "'s length is " << length << endl;
    

    system("pause");
    return 0;
}