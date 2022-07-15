#include<stdlib.h>
#include<iostream>
#include<ctime>
using namespace std;

//声明函数
void getSeconds(unsigned long * par);


int main(int argc, char const *argv[])
{

    unsigned long sec;
    cout << "Number of Seconds : " << sec << endl;
    getSeconds(&sec);
    cout << "Number of Seconds : " << sec << endl;
    system("pause");
    return 0;
}

void getSeconds(unsigned long * par){
    *par = time(NULL);
    return;
}
