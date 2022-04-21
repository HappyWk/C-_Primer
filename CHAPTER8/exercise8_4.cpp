#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void readFileToVector(const string &filename,vector<string> & vec)
{
    string strval;
    ifstream ifstrm;
    ifstrm.open(filename);
    if(ifstrm.is_open())
    {
        // 整行读取文件中的内容存储到vector中
        // while (getline(ifstrm,strval))
        // 将文件中的每一个单词作为独立的元素进行存储
        while (ifstrm >> strval)
        {
            vec.push_back(strval);
        }
    }
    ifstrm.close();
}

main()
{
    vector<string> vec;
    string strVal = "exercise8_4.txt";
    readFileToVector(strVal,vec);
    for(auto v:vec)
        cout << v << endl;

    ofstream ofstrm;
    ofstrm.open(strVal,ofstream::out | ofstream::app);
    string str;
    while (cin >> str)
    {
        ofstrm << str << "\n";
    }
    
    ofstrm.close();
    

    system("pause");
    return 0;
}