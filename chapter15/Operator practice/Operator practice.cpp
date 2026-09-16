#include<iostream>

using namespace std;

class CWin
{
private:
	char id;
	int width, height;
public:
	CWin(char i, int w, int h):id(i), width(w), height(h)
	{ }

	bool operator>(CWin& other)
	{
		return (this->area() > other.area());
	}

	int area()
	{
		return width * height;
	}
};

int main()
{
	CWin win1('A', 70, 80);
	CWin win2('B', 60, 90);

	if (win1 > win2)
		cout << "win1 is larger than win2" << endl;
	else
		cout << "win2 is larger than win1" << endl;
	return 0;
}