#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class CWin
{
private:
	char id;
	int width, height;
public:
	CWin(char i = 'D', int w = 10, int h = 10) :id(i), width(w), height(h)
	{
		cout << "CWin建構子被呼叫了。\n";
	}
	CWin(int w, int h) :width(w), height(h)
	{
		cout << "CWin(int w, int h)建構子被呼叫。\n";
		id = 'K';
	}
	void show_member()
	{
		cout << "Window " << id << ":" << "width = " << width << ", height = " << height << endl;
	}
};

class CTextWin :public CWin					//建立CTextWin類別，繼承自CWin類別
{
private:
	char text[20];
public:
	CTextWin(const char* tx)
	{
		cout << "CTextWin()建構子被呼叫。\n";
		strcpy(text, tx);
	}

	CTextWin(int w, int h) :CWin(w, h)
	{
		cout << "CTextWin(w, h)建構子被呼叫。\n";
		strcpy(text, "Have a good night.");
	}

	void show_text()
	{
		cout << "text = " << text << endl;
	}
};

int main()
{
	CTextWin tx1("Hello C++");
	CTextWin tx2(60, 70);

	tx1.show_member();
	tx1.show_text();

	tx2.show_member();
	tx2.show_text();

	return 0;
}