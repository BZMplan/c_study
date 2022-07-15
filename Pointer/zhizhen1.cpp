#include<stdio.h>
#include<stdlib.h>
//指针的研究
int main(int argc, char const *argv[])
{
    //*ip 是指内存中所对应的值
    // ip 是指内存地址
    int var = 100;
    int *ip;
    ip = &var; //var 与 ip 进行对应
    // 此时var 与 ip为一个东西
    printf("var\n内存位置:%d,值:%d\n",&var,var);
    printf("ip\n内存位置:%d,值:%d",ip,*ip);
    system("pause");
    return 0;

}
