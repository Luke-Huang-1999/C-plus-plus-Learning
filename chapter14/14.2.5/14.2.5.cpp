#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
//'strcpy': This function or variable may be unsafe.Consider using strcpy_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details.
class CWin
{
private:
	char id;
	char title[20];
public:
	CWin(char i = 'D', const char* text = "Default windows") :id(i)
	{
		strcpy(title, text);
	}
	~CWin()
	{
		cout << "解構子被呼叫了, Win " << this->id << "被銷毀了.." << endl;
		system("pause");
	}
	void show()
	{
		cout << "window " << id << ": " << title << endl;
	}
};

int main()
{
	CWin win1('A', "Main window Main window");//前面 strcpy() 已經造成記憶體越界，錯誤可能延遲到程式結束時才被發現。
	CWin win2('B');
	win1.show();
	win2.show();
	cout << "sizeof(win1) = " << sizeof(win1) << endl;
	cout << "sizeof(win2) = " << sizeof(win2) << endl;


	return 0;
}