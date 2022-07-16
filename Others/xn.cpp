//x^n
#include <iostream>
using namespace std;

int n(int ds,int mi);

int main(){

    int ds;
    int mi;
    cout << "请输入底数:";
    cin >> ds;
    cout << "请输入幂:";
    cin >> mi;
    cout <<n(ds,mi);
    system("pause");
   return 0;
}

int n(int ds , int mi){
    if (ds == 1 || ds == 0){
        return ds;
    }
    else if (mi == 1)
    {
        return ds;
    }
    else if (mi == 0)
    {
        return 1;
    }
    else{
        int i =1;
        int sum;
        while(i< mi){
            sum *= ds;            
            i++;
        }
        return sum;
    }
}