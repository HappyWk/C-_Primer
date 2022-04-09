#include <iostream>
#include <vector>
#include <string>
using namespace std;

main()
{
    vector<string> v1;
    string str;
    cin >> str;
    v1.push_back(str);
    while (cin >> str)
    {
        v1.push_back(str);
        auto end = v1.end();
        if(*(end - 1) == *(end - 2))
            break;
    }

    for(auto v : v1)
        cout << v << " ";
    cout << endl;
    

    system("pause");
    return 0;
}