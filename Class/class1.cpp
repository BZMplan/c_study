#include <iostream>
using namespace std;

//定义一个类
class Box
{
public:
	double length;	//宽度
	double breadth; //长度
	double height;	//高度
	double get(void);
	void set(double len, double bre, double hei);
};
//定义成员函数
double Box::get(void)
{
	return length * breadth * height;
}
void Box::set(double len, double bre, double hei)
{
	length = len;
	breadth = bre;
	height = hei;
}

int main(int argc, char const *argv[])
{
	Box Box1;
	Box Box2;
	Box Box3;

	double volume = 0;
	Box1.height = 5.0;
	Box2.length = 6.0;
	Box1.breadth = 7.0;

	Box1.set(Box1.height, Box1.height, Box1.breadth);
	volume = Box1.get();
	cout << "体积为:" << volume << endl;
	return 0;
}