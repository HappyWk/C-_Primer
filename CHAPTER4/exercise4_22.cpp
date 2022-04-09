#include <iostream>
#include <string>
using namespace std;

main()
{
    int grade = 0;
    cin >> grade;
    string finalGrade;
    finalGrade = (grade > 90) ? "high pass"
                              : (grade > 60) ? ((grade < 75) ? "low pass" : "pass")
                              : "fail";
    cout << finalGrade << endl;
    system("pause");
    return 0;
}