#include <iostream>
using namespace std;

class Person
{
public:
    Person(const string &name, const string &adrss) : mName(name), mAdrss(adrss){};
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

istream & read(istream &is,Person &person)
{
    is >> person.mName >> person.mAdrss;
    return is;
}

main()
{
    Person person("wangkai", "jiliangdaxue");
    // cout << "name:" << person.name() << " adrss:" << person.adrss() << endl
    person.print();
    cout << endl;
    read(cin,person);
    person.print();
    cout << endl;
    system("pause");
    return 0;
}