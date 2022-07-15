#include<iostream>
using namespace std;

struct ds
{
    int num = 1;
    string str = "Hello World";
    /* data */
};


int main(int argc, char const *argv[])
{
    ds ds;//声明变量
    cout << ds.num <<endl;
    cout << ds.str <<endl;
    system("pause");
    return 0;
}
