#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book1, book2;
    //读入ISBN、售出的册数以及销售价格
    cin >> book1 >> book2;
    //写入ISBN、售出的册数、总销售额和平均价格
    cout << book1 + book2 << endl;
    system("pause");
    return 0;
}