#include<iostream>

using namespace std;

class CWin
{
private:
	char id;
	int width;
	int height;
public:
	CWin(char i, int w, int h)
	{
		id = i;
		height = h;
		width = w;
	}

	CWin()
	{
		id = 'B';
		height = 100;
		width = 100;
		cout << "CWin建構子被呼叫了" << endl;
	}
	void show_member()
	{
		cout << "Window " << id << ":";
		cout << "width = " << width << ", height = " << height << endl;
	}
};

int main()
{
	CWin win1('A', 80, 80);
	CWin win2;
	win1.show_member();
	win2.show_member();

	return 0;
}