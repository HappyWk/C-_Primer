#include <iostream>
using namespace std;

main()
{
    char ch;
    int num = 0;
    while(cin >> ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            ++num;
    }
    cout << num << endl;
    
    system("pause");
    return 0;
}