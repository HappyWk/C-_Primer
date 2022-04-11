#include <iostream>
using namespace std;

string make_plural(size_t ctr,const string &word,const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

main()
{
    cout << "success:" << make_plural(2,"success","es") << endl;
    cout << "failure:" << make_plural(2,"failure") << endl;
    system("pause");
    return 0;
}
