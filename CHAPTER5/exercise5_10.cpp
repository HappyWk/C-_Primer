#include <iostream>
using namespace std;

main()
{
    unsigned int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0,spaceCnt = 0;
    char ch;
    while (cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
        case 'a':
        case 'A':
            ++acnt;
            break;
        case 'e':
        case 'E':
            ++ecnt;
            break;
        case 'i':
        case 'I':
            ++icnt;
            break;
        case 'o':
        case 'O':
            ++ocnt;
            break;
        case 'u':
        case 'U':
            ++ucnt;
            break;
        case ' ':
            ++spaceCnt;
            break;
        default:
            break;
        }
    }

    cout << "Number of vowel a:\t" << acnt << endl;
    cout << "Number of vowel e:\t" << ecnt << endl;
    cout << "Number of vowel i:\t" << icnt << endl;
    cout << "Number of vowel o:\t" << ocnt << endl;
    cout << "Number of vowel u:\t" << ucnt << endl;
    cout << "Number of space count:\t" << spaceCnt << endl;
    system("pause");
    return 0;
}