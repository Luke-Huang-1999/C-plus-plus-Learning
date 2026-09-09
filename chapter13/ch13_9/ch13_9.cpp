#include<iostream>
using namespace std;

class CWin
{
private:
	char id;
	int width;
	int height;

public:
	CWin(char i, int w, int h):id(i), width(w), height(h)
	{ }

	CWin compare(CWin win)
	{
		if (this->area() >= win.area())
			return *this;
		else
			return win;
	}

	int area()
	{
		return (height * width);
	}
	char get_id()
	{
		return id;
	}
};
int main()
{
	CWin win1('A', 70, 80);
	CWin win2('B', 60, 90);

	cout << "Window " << (win1.compare(win2)).get_id() << " is larger.\n";


	return 0;
}