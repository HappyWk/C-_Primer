#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> v1;
    for(int i = 0;i < 10;i++)
        v1.push_back(i);
    for(auto i : v1)
        cout << i << " ";
    cout << endl;

    for(auto it = v1.begin();it != v1.end();it++)
    {
        if( (*it)%2 == 1 )
            *it *= 2;
    }

    for(auto i : v1)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}