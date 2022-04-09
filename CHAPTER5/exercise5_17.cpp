#include <iostream>
#include <vector>
using namespace std;

// 编写一个函数，判断一个vector<int> 对象是否为另一个的前缀

bool is_miniSame(vector<int> &v1, vector<int> &v2)
{
    auto v1_size = v1.size();
    auto v2_size = v2.size();
    if (v1_size < v2_size)
    {
        for (int i = 0; i < v1_size; ++i)
        {
            if (v1[i] != v2[i])
            {
                return false;
            }
        }
    }
    else
    {
        for (int i = 0; i < v2_size; ++i)
        {
            if (v1[i] != v2[i])
            {
                return false;
            }
        }
    }
    return true;
}

main()
{
    vector<int> v1(10), v2(25);
    for (int i = 0; i < v1.size(); ++i)
        v1[i] = i;
    v1.push_back(23);

    for (auto v : v1)
        cout << v << " ";
    cout << endl;

    for (int i = 0; i < v2.size(); ++i)
        v2[i] = i;

    for (auto v : v2)
        cout << v << " ";
    cout << endl
         << endl;

    bool result = is_miniSame(v1, v2);
    cout << result << endl;

    system("pause");
    return 0;
}