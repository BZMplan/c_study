//获取当前时间
#include<stdio.h>
#include<ctime>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "本地日期和时间:" << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC日期和时间:" << dt << endl; 
    system("pause");
    return 0;
}
