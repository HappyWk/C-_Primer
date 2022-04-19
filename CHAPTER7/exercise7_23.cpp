#include <iostream>
using namespace std;

class Screen
{
public:
    typedef string::size_type pos;
    // 构造解析
public:
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    // 成员函数
public:
    char get() const { return contents[cursor]; } // 隐式内联函数
    inline char get(pos ht, pos wd) const;        // 显式内联函数
    Screen &move(pos r, pos c);

    // 成员变量
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline char Screen::get(pos ht, pos wd) const
{
    pos row = ht * wd;
    return contents[row + wd];
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

main()
{
    system("pause");
    return 0;
}