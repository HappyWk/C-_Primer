#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> vec1;
    int val;
    while (cin >> val)
        vec1.push_back(val);

    vector<int> vec2(size(vec1) - 1);
    for (int i = 1; i <= size(vec1); i++)
        vec2[i - 1] = vec1[i - 1] + vec1[i];

    for (auto i : vec2)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}