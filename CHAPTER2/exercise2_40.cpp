#include <iostream>
using namespace std;

class Sales_data
{
public:
    string bookNo;
    unsigned int units_sold;
    double revenue;
};

main()
{
    double price = 0;
    Sales_data data1;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;
    cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << endl;

    system("pause");
    return 0;
}