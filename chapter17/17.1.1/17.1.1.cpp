#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Shape
{
private:
	string color;
public:
	Shape(string c = "white"):color(c) {};
	virtual void show()
	{
		cout << "Shape color:" << color << endl;
	}
	
};

class Rectangle :public Shape
{
private:
	int width, height;
public:
	Rectangle(int w = 1, int h = 1) :width(w), height(h)
	{
		
	}
	virtual void show()
	{
		cout << "Rectangle color:yellow, width:" << width << ", height:" << height << endl;
	}
};

class Circle :public Shape
{
private:
	double radius;
public:
	Circle(double r = 1) :radius(r) {};
	virtual void show()
	{
		cout << "Circle color:red, radius:" << radius << endl;
	}
};

int main()
{
	Shape shape;
	Rectangle rectangle(5, 3);
	Circle circle(2.5);


	shape.show();
	rectangle.show();
	circle.show();
	return 0;
}