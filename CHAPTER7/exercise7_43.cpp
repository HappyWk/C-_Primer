#include <iostream>
#include <vector>
using namespace std;

class NoDefault
{
public:
    NoDefault(int c) : name(c) {cout << "this is nodefault's func.";}

public:
    int name;
};

class C
{
public:
    C() : nn(23) {cout << "this is C's func";}

public:
    NoDefault nn;
};

main()
{
    NoDefault cc(23);

    C ccc;
    cout << endl;

    // vector<NoDefault> vec(23);

    vector<C> vec(23);



    system("pause");
    return 0;
}