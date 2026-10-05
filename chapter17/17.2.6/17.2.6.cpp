#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
class CWin
{
protected:
	char id;
	int width, height;
public:
	CWin(char i = 'D', int w = 10, int h = 10)
	{
		id = i;
		width = w;
		height = h;
	}
	void show()
	{
		cout << "window = " << id << ", area = " << area() << endl;
	}
	virtual int area()
	{
		return (width * height);
	}
	void display(CWin& win)
	{
		win.show();
	}
};

class CMinWin :public CWin
{
public:
	CMinWin(char i, int w, int h) :CWin(i, w, h) {};

	virtual int area()
	{
		return ((int)(0.8 * width * height));
	}
};

int main()
{
	CWin win('A', 70, 80);
	CMinWin m_win('B', 50, 60);

	CWin* ptr = nullptr;

	ptr = &win;
	ptr->display(*ptr);
	

	ptr = &m_win;
	ptr->display(*ptr);


	return 0;
}