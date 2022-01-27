#include <iostream>

// 打印输出两个数字的乘积

int main()
{

    std::cout << "Please enter two numbers: " << std::endl;
    int num1, num2;
    std ::cin >> num1 >> num2;
    std::cout << "The multiple of " << num1 << " and " << num2
              << " is " << num1 * num2 << std::endl;
    system("pause");
    return 0;
}