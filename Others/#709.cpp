#include<iostream>
using namespace std;

class Solution {
public:
//让字符变为小写
    string toLowerCase(string str) {
        for(int i=0;i<str.size();i++){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=str[i]+32;
            }
        }
        return str;
    }
};


int main()
{
    string s = "Hello";
    Solution s1;
    cout<<s1.toLowerCase(s)<<endl;
    system("pause");
    return 0;

}