#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book1, book2;
    //读入ISBN、售出的册数以及销售价格
    cin >> book1 >> book2;
    // 先判断两本书是否具有相同的isbn号，再进行相加
    if(book1.isbn() == book2.isbn())
    {
        cout << book1 + book2 << endl;
        system("pause");
        return 0;       // 表示成功
    }
    else
    {
        cerr << "Data must refer to same ISBN" <<endl;
        system("pause");
        return -1;      // 表示失败
    }
}