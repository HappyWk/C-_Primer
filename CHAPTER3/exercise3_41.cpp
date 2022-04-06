#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> v1(begin(arr),end(arr));
    for(auto i : v1)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}