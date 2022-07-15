//指针与数组
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int i = 0;
    //在指针中带星号的是值,不带星号的是内存位置 
    //指针的内存位置为0，没有对应的值
    int num[]={1,2,3};
    const char* charnum = "123";
    int *p;


p = num;
    while(i<3){
        cout << "内存地址:" << p << "\t值:" << *p <<endl;
        p++;//将内存地址自加
        i++;
    }
    system("pause");
    return 0;
}
