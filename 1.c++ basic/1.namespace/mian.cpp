//命名空间的使用

#include <iostream>

namespace spaceA
{
    int x;
    int y;
}

namespace spaceB
{
    int x;
    int y;
}

int main()
{
    // 用法1：名字空间名称::局部内容名
    spaceA::x = 10;
    spaceA::y = 10;
    std::cout << "spaceA::x = " << spaceA::x << std::endl;
    std::cout << "spaceA::y = " << spaceA::y << std::endl;

    // 用法2：using namespace 命名空间名称
    using namespace spaceA;
    x = 10;
    y = 10;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    // 用法3：using 命名空间名称::局部内容名
    using spaceB::x;
    x = 20;
    std::cout << "x = " << spaceA::x << std::endl;

    return 0;
}