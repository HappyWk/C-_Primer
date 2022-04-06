#include <iostream>
using namespace std;

main()
{
    // 编写程序，使用while循环将50到100的整数进行相加
    int sum = 0, val = 50;
    while (val <= 100)
        sum += val++;
    cout << sum << endl;

    // 编写程序，使用递减云端夫在循环中按照递减顺序打印出10到0之间的整数
    int num = 10;
    while (num >= 0)
        cout << num-- << " ";
    cout << endl;

    // 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内所有整数
    cout << "Enter two numbers:";
    int numMin = 0, numMax = 0;
    cin >> numMin >> numMax;
    for (; numMin <= numMax; numMin++)
        cout << numMin << " ";
    cout << endl;
    
    system("pause");
    return 0;
}