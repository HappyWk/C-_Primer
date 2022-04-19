#pragma once
#include <iostream>
using namespace std;

class Sales_data
{
    // 友元：可以允许其他类或这个类的非公有成员访问这个类
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    string isbn() const { return this->bookNo; };
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

public:
    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;

public:
    // 不使用委托构造函数下的构造函数
    // Sales_data() = default;
    // Sales_data(const string &s) : bookNo(s){};
    // Sales_data(const string &s, unsigned int n, double p) : bookNo(s), units_sold(n), revenue(p * n){};
    // Sales_data(istream &is) { read(is, *this); }

    // 使用委托构造函数下的构造函数
    Sales_data(const string &s, unsigned int n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
    Sales_data() : Sales_data(" ", 0, 0) { cout << "default func." << endl; }
    Sales_data(const string &s) : Sales_data(s, 0, 0) { cout << "in string s func" << endl; }
    Sales_data(istream &is)
    {
        read(is, *this);
        cout << "in stream func";
    }

    ~Sales_data();
};

// 定义类相关的非成员函数
istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    cin >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << "ISBN: " << item.isbn() << " "
       << "Num: " << item.units_sold << " "
       << " Revenue: " << item.revenue << " "
       << "avg: " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// 构造和析构函数
Sales_data::~Sales_data()
{
}
