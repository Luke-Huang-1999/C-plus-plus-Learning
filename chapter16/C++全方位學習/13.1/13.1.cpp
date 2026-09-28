#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Point
{
protected:
	int x, y;
public:
	Point(int m = 0, int n = 0) :x(m), y(n) {};
	
	void setpoint()
	{
		cout << "x = ";
		x = getx();

		cout << "y = ";
		y = gety();
	}
	int getx()
	{
		cin >> x;
		return x;
	}
	int gety()
	{
		cin >> y;
		return y;
	}
	void show()
	{
		cout << "x = " << x << ", y = " << y << endl;
	}
};

class Square :public Point
{
protected:
	void area()
	{

	}
public:
	Square(int m, int n) :Point(m, n) {};
	int getarea()
	{

	}
};

int main()
{
	Point obj;
	obj.setpoint();


	obj.show();
	return 0;
}