#include <iostream>
using namespace std;

class Box
{
public:
	double length;
	void setWidth(double wid);
	double getWidth(void);
private:
	double width;

};

// 成员函数定义
double Box::getWidth(void)
{
	return width;
}

void Box::setWidth(double wid)
{
	width = wid;
}

// 程序的主函数
int main()
{
	Box box;

	// box.width =10;不能修改
	box.length = 10;//可以修改
	cout<< box.length<<endl;
	box.setWidth(10);
	cout<< box.getWidth()<<endl;
}