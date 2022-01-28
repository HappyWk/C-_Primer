#include <iostream>
using namespace std;

// 当读取数量不确定的输入数据的时候
// 从文件中读取一串数据并求和

int main()
{
    int sum = 0, val;
    while (cin >> val)
    {
        sum += val;
    }
    cout << "Sum is " << sum << endl;
    system("pause");
    return 0;
}