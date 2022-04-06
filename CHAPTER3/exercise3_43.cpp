#include <iostream>
using namespace std;

main()
{
    // 创建多维数组
    int arr[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    // 范围for语句遍历数组
    for (auto &rou : arr)
    {
        for (auto &col : rou)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}