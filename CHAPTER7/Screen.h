#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Screen;

class Window_mgr
{
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);

private:
    vector<Screen> Screens{Screen(24, 80, ' ')};
};

class Screen
{
    friend class Window_mgr;
    friend void Window_mgr::clear(ScreenIndex);
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
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const { os << contents; }

    // 成员变量
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = Screens[i];
    s.contents = string(s.height*s.width,' ');
}

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

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char c)
{
    contents[r * width + col] = c;
    return *this;
}


