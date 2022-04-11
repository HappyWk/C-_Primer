#include <iostream>
#include <initializer_list>
using namespace std;

int getSum(initializer_list<int> list)
{
    int sum = 0;
    for(auto i : list)
        sum += i;
    return sum;
}

main()
{
    initializer_list<int> list = {1,2,3,4,5,6,7,8,9,10};
    cout << getSum(list) << endl;
    system("pause");
    return 0;
}



