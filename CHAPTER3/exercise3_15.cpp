#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

main()
{
    vector<string> str_vec;
    string str;
    while (cin >> str)
        str_vec.push_back(str);
    
    // 使用范围for语句遍历vector
    for(auto &v : str_vec)
        cout << v << " ";
    cout << endl;
    
    system("pause");
    return 0;
}