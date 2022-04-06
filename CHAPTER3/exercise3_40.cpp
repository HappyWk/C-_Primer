#include <iostream>
#include <cstring>
using namespace std;

    const char c1[] = "Hello";
    const char c2[] = "Cpp!";

main()
{
    char str[100];
    strcat(str, c1);
    strcat(str," ");
    strcat(str,c2);
    cout << str << endl;

    system("pause");
    return 0;
}