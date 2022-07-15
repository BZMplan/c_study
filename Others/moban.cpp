#include <iostream>
#include <string>
using namespace std;

template <class TypeName, class TypeAge>
class Person
{
public:
    Person(TypeName name, TypeAge age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    TypeName m_Name;
    TypeAge m_Age;

    void showInfo()
    {
        cout << "Name:" << m_Name << "Age:" << m_Age << endl;
    }
};

void test01(){
    Person<string , int> p1("张三",18);
    //Person p2("张三",18);
    p1.showInfo();
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
