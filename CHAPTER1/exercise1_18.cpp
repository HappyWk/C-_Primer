#include <iostream>
using namespace std;

main()
{
    // currVal是我们当前要统计的数；val是我们将读入的新的值
    int currVal = 0,val = 0;
    // 读入第一个数，并确保确实有数据可以处理
    if(cin >> currVal)
    {
        int cnt = 1;
        while (cin >> val)
        {
            if (currVal == val)
                ++cnt;
            else{
                cout << currVal << " occurs " << cnt << " times." << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times." << endl;
    }

    system("pause");
    return 0;
}