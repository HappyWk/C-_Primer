#include <iostream>
#include "Sales_item.h"
using namespace std;

main()
{
    Sales_item currSale, book;
    if (cin >> currSale)
    {
        int cnt = 1;
        while (cin >> book)
        {
            if (compareIsbn(currSale, book))
            {
                cnt += 1;
                currSale += book;
            }
            else
            {
                cout << currSale << " occurs " << cnt << " times." << endl;
                currSale = book;
                cnt = 1;
            }
        }
        cout << currSale << " occurs " << cnt << " times." << endl;
    }

    system("pause");
    return 0;
}