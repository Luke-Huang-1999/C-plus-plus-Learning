#include<iostream>

using namespace std;

class CWin
{
private:
	char id;
	int width, height;
public:
	CWin(char i, int w, int h);
	//: id(i), width(w), height(h)
	//{
	//	cout << "建構子被呼叫了。\n";
	//}
	~CWin();
	//{
		//cout << "解構子被呼叫了，Win" << this->id << "被銷毀了..\n";
		//system("pause");
	//}
	void show_member()
	{
		cout << "Window " << id << ":width = " << width << ", height = " << height << "\n";
	}
};

CWin::CWin(char i, int w, int h) :id(i), width(w), height(h)
{
	cout << "建構子被呼叫了。\n";
}

CWin::~CWin()
{
	cout << "解構子被呼叫了，Win" << this->id << "被銷毀了..\n";
	system("pause");
}

int main()
{
	CWin win1('A', 50, 40);
	CWin win2('B', 40, 50);
	CWin win3('C', 60, 70);
	CWin win4('D', 90, 40);
	win1.show_member();
	win2.show_member();

	return 0;
}