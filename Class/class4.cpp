//运算符重载
#include <iostream>
using namespace std;
class CBook
{
public:
    int num1;
    //因为iPage没有初始的值,所以没有默认的构造函数
    CBook(int iPage)
    {
        m_iPage = iPage;
    }
    CBook operator+(CBook b)
    {
        return CBook(m_iPage + b.m_iPage);
    }
    void display()
    {
        cout << m_iPage << endl;
    }

protected:
    int m_iPage;
};

int main(int argc, char const *argv[])
{
    CBook bk1(10);
    CBook bk2(20);
    CBook tmp(0);
    CBook num(0);
    num.num1 = 0;
    tmp = bk1 + bk2;
    tmp.display();
    cout << 1 + 2 << endl;
    cout << num.num1<<endl;
    return 0;
}
