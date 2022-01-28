#include <iostream>
using namespace std;

// if语句
// 使用if语句来统计在输入中每个值连续出现的次数

int main()
{

    int currentValue = 0, value = 0;
    cout << "please enter an array numbers: " << endl;
    // 读取第一个数
    if (cin >> currentValue)
    {
        int cnt = 1;
        // 内层又会读取一个数
        while (cin >> value)
        {
            // 如果读取的数字连续相同，计数器进行累加
            if (value == currentValue)
            {
                cnt++;
            }
            // 如果读取的数字不在相同，则输出结果，并将计数器置一
            else
            {
                cout << currentValue << " occurs "
                     << cnt << " times" << endl;
                currentValue = value;
                cnt = 1;
            }
        }
        // 输出读取的一串数字中最后一个数字
        cout << currentValue << " occurs "
             << cnt << " times" << endl;
    }
    system("pause");
    return 0;
}