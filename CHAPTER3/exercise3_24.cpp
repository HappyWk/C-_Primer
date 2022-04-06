#include <iostream>
#include <vector>
using namespace std;

main()
{
    vector<int> v1;
    int val = 0;
    while (cin >> val)
        v1.push_back(val);

    auto begin = v1.begin();
    auto end = v1.end();
    auto mid = begin + (end - begin)/2;
    end--;

    while (begin < mid)
    {
        cout << *begin + *end << " ";
        begin++;end--;
    }
    
    

    system("pause");
    return 0;
}