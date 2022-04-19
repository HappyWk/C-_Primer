#include <iostream>
using namespace std;

class Person
{
public:
    Person(const string &name, const string &adrss) : mName(name), mAdrss(adrss){};
    string name() const { return mName; }
    string adrss() const { return mAdrss; }

private:
    string mName;
    string mAdrss;
};

main()
{
    Person person("wangkai", "jiliangdaxue");
    cout << "name:" << person.name() << " adrss:" << person.adrss() << endl;
    system("pause");
    return 0;
}