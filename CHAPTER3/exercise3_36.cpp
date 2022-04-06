#include <iostream>
using namespace std;

// 编写一段程序，比较两个数组是否相等
bool is_array_equal(int *const begin_1, int *const end_1, int *begin_2, int *const end_2)
{
    if ((end_1 - begin_1) != (end_2 - begin_2))
        return false;
    else
    {
        for (int *i = begin_1, *j = begin_2; (i != end_1) && (j != end_2); i++, j++)
        {
            if (*i != *j)
                return false;
        }
    }
    return true;
}

main()
{
    constexpr int size = 10;
    int a1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    bool result = is_array_equal(begin(a1), end(a1), begin(a2), end(a2));
    cout << result << endl;
    system("pause");
    return 0;
}