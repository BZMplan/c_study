//函数的重载
#include <iostream>
using namespace std;
//在同一个作用域内，可以声明几个功能类似的同名函数，但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同.
class printData
{
public:
    void print(int i)
    {
        cout << "整数为:" << i << endl;
    }
    void print(double f)
    {
        cout << "浮点数为:" << f << endl;
    }
    void print(char c[])
    {
        cout << "字符串为:" << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    printData pd;
    pd.print(1);
    char c[] = "Hello World";
    pd.print(c);
    pd.print(5353.45757);

    return 0;
}
