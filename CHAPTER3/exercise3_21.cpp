#include <iostream>
#include <vector>
#include <string>
using namespace std;

main()
{
    // 输入一组整形数据，存储到一个vector对象中去
    int val = 0;
    vector<int> v1;
    while (cin >> val)
        v1.push_back(val);

    // 使用迭代器遍历容器中的内容
    for(auto i = v1.begin();i != v1.end();i++)
        cout << *i << " ";
    cout << endl;

    string str;
    cin >> str;
    for(auto i = str.begin();i != str.end();i++)
        (*i) = toupper(*i);
    
    cout << str << endl;
    
    system("pause");
    return 0;
}