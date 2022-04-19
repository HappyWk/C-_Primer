#include <iostream>
using namespace std;

class Person
{
    friend istream &read(istream &is, Person &person);

public:
    Person() = default;
    Person(const string &name, const string &adrss) : mName(name), mAdrss(adrss){};
    Person(istream &is) { read(is, *this); };

public:
    string name() const { return mName; }
    string adrss() const { return mAdrss; }
    void print();

public:
    string mName;
    string mAdrss;
};

void Person::print()
{
    cout << "Name:" << this->mName << "\tAdrss:" << this->mAdrss;
}

istream &read(istream &is, Person &person)
{
    is >> person.mName >> person.mAdrss;
    return is;
}

main()
{
    Person p1;
    Person p2("wangkai","anhuifuyang");
    Person p3(cin);
    p1.print();cout << endl;
    p2.print();cout << endl;
    p3.print();cout << endl;
    system("pause");
    return 0;
}