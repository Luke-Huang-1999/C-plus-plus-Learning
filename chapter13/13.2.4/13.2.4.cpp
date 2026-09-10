#include<iostream>

using namespace std;

class CWin
{
private:
	char id;
	int width;
	int height;
public:
	CWin(int i = 'D', int w = 100, int h = 100):id(i),width(w),height(h)
	{
		cout << "建構子被呼叫了" << endl;
	}
	//CWin()
	//{
	//	cout << "預設建構子被呼叫了" << endl;
	//}
};

int main()
{
	CWin win1('A', 80);
	CWin win2;

	return 0;
}