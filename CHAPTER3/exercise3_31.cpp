#include <iostream>
#include <vector>
using namespace std;

main()
{
    constexpr int size = 10;
    int ia[size];
    for (int i = 0; i < size; i++)
        ia[i] = i;

    for (auto i : ia)
        cout << i << " ";
    cout << endl;

    int ia2[size];
    for (int i = 0; i < size; i++)
        ia2[i] = ia[i];

    vector<int> v1(10);
    for (int i = 0; i < v1.size(); i++)
        v1[i] = ia[i];

    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}