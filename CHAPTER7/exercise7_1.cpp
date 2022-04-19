#include <iostream>
using namespace std;

class Sales_data
{
public:
    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

main()
{
    Sales_data total;
    double price = 0;
    if (cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = price * total.units_sold;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue = price * total.units_sold;
            if (total.bookNo == trans.bookNo)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                cout << "ISBN:" << total.bookNo << " units_sold:" << total.units_sold << " revenue:" << total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << "ISBN:" << total.bookNo << " units_sold:" << total.units_sold << " revenue:" << total.revenue << endl;
    }

    system("pause");
    return 0;
}