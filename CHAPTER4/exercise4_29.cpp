#include <iostream>
#include <string>
#include <vector>
using namespace std;

main()
{
    vector<int> v1(10);
    int a1 = 20;
    int *p = &a1;
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof v1 << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << "======================" << endl;
    int arr[10] = {0};
    cout << sizeof(arr) << endl;
    cout << sizeof *arr << endl;

    int *ptr = arr;
    cout << sizeof *ptr << endl;
    cout << sizeof(ptr) << endl;


    system("pause");
    return 0;
}