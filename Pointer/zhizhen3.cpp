#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sz[5] = {1,2,3,4,5};
    int *zz;
    zz = sz;
    for (int i = 0; i < 5; i++)
    {
        cout<<zz<<"\t"<<*zz<<endl;
        zz++;
    }
    
    system("pause");
    return 0;
}
