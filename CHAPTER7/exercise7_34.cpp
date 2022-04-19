#include <iostream>
using namespace std;

typedef string str;

class Screen1
{
public:
    
    void print(str s)
    {
        cout << s;
    }
    
};

main()
{
    Screen1 sc;
    sc.print("nihao");
    system("pause");
    return 0;
}