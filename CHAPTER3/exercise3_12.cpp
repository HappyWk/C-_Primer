#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
// 定义和初始化vector对象

main()
{
    // 默认初始化：初始状态为空，元素个数为0
    vector<int> ivec;
    ivec.push_back(10);

    // 其他初始化方法：注意类型要相同
    vector<int> ivec2(ivec);
    vector<int> ivec3 = ivec;

    // 列表初始化vector对象
    vector<string> str_ivec = {"hello","world","nihao","china"};
    vector<string> str_ivec2{"nihao","America","china","hello"};

    // 创建指定数量的元素
    vector<int> v1(10,-34);
    vector<string> v2(23,"hello");

    // 值初始化
    vector<int> vv1(10);        // 10个元素，元素的值都为0
    vector<string> vv2(20);     // 20个元素，元素的值都为空

    system("pause");
    return 0;
}