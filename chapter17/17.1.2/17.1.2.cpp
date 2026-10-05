#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include<iostream>
#include<string>

using namespace std;
class Shape
{
private:
	string color;
public:
	Shape(string c = "white") :color(c) {};
	virtual void show()
	{
		cout << "Shape color:" << color << ", area = " << area() << endl;
	}
	virtual double area()
	{
		return 0;
	}
	string getcolor()
	{
		return color;
	}
};

class Rectangle :public Shape
{
private:
	int width, height;
public:
	Rectangle(int w = 1, int h = 1) :Shape("yellow"), width(w), height(h)
	{

	}
	virtual void show()
	{
		cout << "Rectangle color:"<<getcolor()<<", width:" << width << ", height : " << height << ", area = " << area() << endl;
	}
	virtual double area()
	{
		return width * height;
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
		cout << "Circle color:red, radius:" << radius << ", area = " << area() << endl;
	}
	virtual double area()
	{
		return radius * radius * PI;
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

/*
Shape color:white, area = 0
Rectangle color:yellow, width:5, height : 3, area = 15
Circle color:red, radius:2.5, area = 19.635
*/