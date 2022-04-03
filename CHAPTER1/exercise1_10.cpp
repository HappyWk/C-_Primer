#include <iostream>

main()
{
    int val = 10;
    while (val >= 0)
    {
        std::cout << val << " ";
        --val;
    }
    std:: cout << std::endl;
    system("pause");
    return 0;
}