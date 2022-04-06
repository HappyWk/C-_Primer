#include <iostream>
#include <vector>
using namespace std;

main()
{
    // 编写一段程序，利用指针将数组中的元素置为0
    constexpr int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
        arr[i] = i;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    auto begin = arr;
    auto end = &arr[size];
    while (begin != end)
    {
        *begin = 0;
        begin++;
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}