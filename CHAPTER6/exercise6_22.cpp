#include <iostream>
using namespace std;

void swap_ptr(int *(&p1),int *(&p2))
{
    int *temp_ptr = p1;
    p1 = p2;
    p2 = temp_ptr;
}

main()
{
    int m = 20,n = 10;
    int *p1 = &m,*p2 = &n;
    cout << *p1 << " " << *p2 << endl;
    swap_ptr(p1,p2);
    cout << *p1 << " " << *p2 << endl;
    system("pause");
    return 0;
}
