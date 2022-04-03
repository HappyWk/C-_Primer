#include <iostream>

main()
{
    std::cout << "Enter two numbers: ";
    int val_1, val_2;
    std::cin >> val_1 >> val_2;
    if (val_1 > val_2)
    {
        while (val_1 >= val_2)
        {
            std::cout << val_1 << " ";
            --val_1;
        }
        std::cout << std::endl;
    }
    else if (val_1 < val_2)
    {
        while (val_1 <= val_2)
        {
            std::cout << val_1 << " ";
            ++val_1;
        }
        std::cout << std::endl;
    }
    else if (val_1 == val_2)
    {
        std::cout << val_1 << std::endl;
    }

    system("pause");
    return 0;
}