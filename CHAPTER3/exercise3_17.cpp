#include <iostream>
#include <vector>
#include <string>
using namespace std;

main()
{
    vector<string> str_vec;
    string str;
    while (cin >> str)
        str_vec.push_back(str);
    
    for(auto &str : str_vec)
    {
        for(auto &i : str)
        {
            i = toupper(i);
        }
        cout << str << " ";
    }
    cout << endl;


    system("pause");
    return 0;
}