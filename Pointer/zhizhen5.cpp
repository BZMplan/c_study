#include<stdlib.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1 = 300;
    int *p;
    int **pp;
    int ***ppp;
    p = &num1;
    pp = &p;
    ppp = &pp;

    cout << &num1 << "\t" << p << "\t" << pp << "\t" << ppp <<endl;
    cout << num1 << "\t" << *p << "\t" << **pp << "\t" << ***ppp <<endl;
    

    system("pause");
    return 0;
}
