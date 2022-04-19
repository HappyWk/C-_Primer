#include <iostream>
using namespace std;

class Debug
{

public:
    constexpr Debug(bool b = true) : hw(b), IO(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), IO(i), other(o) {}

    constexpr bool any() { return hw || IO || other; }
    void set_io(bool b) { IO = b; }
    void set_hw(bool b) { hw = b; }
    void set_other(bool b) { other = b; }

public:
    bool hw;    // 硬件错误
    bool IO;    // IO错误
    bool other; // 其他错误
};

main()
{
    system("pause");
    return 0;
}