#include<stdlib.h>
#include<iostream>

using namespace std;
const int len = 5;
int main(int argc, char const *argv[])
{
    int v[len]={1,2,3,4,5};
    int *p[len];

    for (int i = 0; i < len; i++)
    {
        /* code */
        p[i] = &v[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << v[i] <<endl;
        cout << *p[i] <<endl;
        /* code */
    }
    

    system("pause");
    return 0;
}
