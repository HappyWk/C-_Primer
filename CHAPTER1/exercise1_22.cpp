#include <iostream>
#include "Sales_item.h"
using namespace std;

main()
{
    Sales_item Sum;
    Sales_item book;
    cin >> Sum;
    while (cin >> book)
        Sum += book;
    cout << Sum << endl;
    system("pause");
    return 0;
}