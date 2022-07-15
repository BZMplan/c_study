//cin 输入流
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[CHAR_MAX];
    cout << "请输入一段文字:" ;
    cin >> str;
    cout <<"您输入的数据为:" << str <<endl;
    system("pause");
    return 0;
}
