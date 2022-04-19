#include <iostream>
using namespace std;
#include "Sales_data.h"
#include "Sales_data.cpp"

main()
{
    // 用程序用到每一个构造函数
    // 默认构造
    Sales_data sa1;
    // 只输入ISBN的构造
    Sales_data sa2("nihao(isbn)");
    // 输入全部信息的构造
    Sales_data sa3("nihao",3,34.2);
    // 使用istream的构造
    Sales_data sa4(cin);
    // 对各种构造进行输出
    print(cout ,sa1);cout << endl;
    print(cout ,sa2);cout << endl;
    print(cout ,sa3);cout << endl;
    print(cout ,sa4);cout << endl;
    // Sales_data total;
    // double price = 0;
    // if (cin >> total.bookNo >> total.units_sold >> price)
    // {
    //     total.revenue = price * total.units_sold;
    //     Sales_data trans;
    //     while (cin >> trans.bookNo >> trans.units_sold >> price)
    //     {
    //         trans.revenue = price * trans.units_sold;
    //         if (total.bookNo == trans.bookNo)
    //         {
    //             total.combine(trans);
    //         }
    //         else
    //         {
    //             print(cout ,total);
    //             total = trans;
    //         }
    //     }
    //     print(cout ,total);
    //     cout << endl;
    // }

    system("pause");
    return 0;
}