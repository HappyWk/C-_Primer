#include <iostream>
#include <string>
#include <map>
using namespace std;

main()
{
    // 使用关联容器进行string输入
    map<string,int> m1;
    string str;
    while (cin >> str)
        ++m1[str];

    // 遍历关联容器
    for(auto v : m1)
        cout << v.first << "\t" << v.second << endl;
    cout << endl;

    // 找出关联容器中出现次数最多的string以及occur times
    string str1;
    int cnt = 0;
    for(auto v : m1)
    {
        if(v.second >= cnt)
        {
            str1 = v.first;
            cnt = v.second;
        }
    }
    cout << str1 << " occurs " << cnt << " times." << endl;

    system("pause");
    return 0;
}