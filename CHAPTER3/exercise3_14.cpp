#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

main()
{
    vector<int> v1;
    int val = 0;
    while (cin >> val)
        v1.push_back(val);

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // 使用范围for语句遍历v1中的元素
    for (auto &i : v1)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}