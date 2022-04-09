#include <iostream>
using namespace std;

main()
{
    cout << "Enter two numbers: ";
    int val1, val2;
    while (cin >> val1 >> val2)
    {
        try
        {
            if (val2 == 0)
                throw runtime_error("divisor is 0.");
            cout << val1 / val2 << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what() << "Try Again? Enter y or n\n";
            char c;
            cin >> c;
            if (c == 'n')
                break;
        }
        cout << "Enter two numbers:" ;
    }

    system("pause");
    return 0;
}