#include <iostream>
#include <vector>
using namespace std;
// 编写一个递归函数，输出vector对象的内容
typedef vector<int>::iterator Iter;
void print_vec(Iter begin,Iter end)
{
    if(begin != end)
    {
        cout << *begin << " ";
        print_vec(++begin,end);
    }
    else
    {
        cout << "over" << endl;
    }
}

main()
{
    vector<int> v1;
    for (int i = 0; i < 10; ++i)
        v1.push_back(i * i);

    print_vec(v1.begin(),v1.end());
    system("pause");
    return 0;
}
