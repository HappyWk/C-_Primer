#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> v1(10);
    for (int i = 1; i <= 10; i++)
        v1[i - 1] = i;

    for(auto i = v1.begin();i != v1.end();i++)
        cout << *i << " ";
    cout << endl;

    for(auto i = v1.begin();i != v1.end();i++)
        (*i) *= 2;

    for(auto i = v1.begin();i != v1.end();i++)
        cout << *i << " ";
    cout << endl;
    system("pause");
    return 0;
}