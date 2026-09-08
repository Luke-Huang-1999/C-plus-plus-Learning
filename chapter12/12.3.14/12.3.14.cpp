#include<iostream>
using namespace std;

class CWin
{
private:
	char id;
	int length;
	int width;
public:
	void set(char i, int l,int w)
	{
		id = i;
		length = l;
		width = w;
	}

	friend void showArea(CWin win);
};

void showArea(CWin win)
{
	cout << "ID：" << win.id << "\n";
	cout << "長度：" << win.length << "\n";
	cout << "寬度：" << win.width << "\n";
	int area = win.length * win.width;
	cout << "面積：" << area << "\n";
}

int main()
{
	CWin win1;
	win1.set('A', 10, 20);
	showArea(win1);

	return 0;
}