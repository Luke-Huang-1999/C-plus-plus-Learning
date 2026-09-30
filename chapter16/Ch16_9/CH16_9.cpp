#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class CWin
{
protected:
	char id;
public:
	CWin(char i = 'D') :id(i)
	{
		cout << "CWin(char i = 'D')的建構子被呼叫了。\n";
	}
	CWin(const CWin& win)
	{
		cout << "CWin(const CWin& win)拷貝建構子被呼叫了\n";
		id = win.id;
	}
	~CWin()
	{
		cout << "~CWin()解構子被呼叫了\n";
	}
};

class CTextWin:public CWin
{
private:
	char* text;
public:
	CTextWin(char i, const char* tx) :CWin(i)
	{
		cout << "CTextWin(char i, const char* tx)建構子被呼叫了\n";
		text = new char[strlen(tx) + 1];
		strcpy(text, tx);
	}
	CTextWin(const CTextWin& tx) :CWin(tx)
	{
		cout << "CTextWin(const CTextWin& tx)被呼叫了\n";
		text = new char[strlen(tx.text) + 1];
		strcpy(text, tx.text);
	}
	~CTextWin()
	{
		delete[] text;
		cout << "~CTextWin()被呼叫了。\n";
	}

	void show_member()
	{
		cout << "Window " << id << ":text = " << text << endl;
	}
	void set_member(char i, const char* tx)
	{
		id = i;
		delete[] text;
		text = new char[strlen(tx) + 1];
		strcpy(text, tx);
	}
};
int main()
{
	CTextWin tx1('A', "Hello C++");
	CTextWin tx2(tx1);

	tx1.show_member();
	tx2.show_member();

	cout << "更改tx1物件的成員之後..." << endl;
	tx1.set_member('B', "Welcome C++");

	tx1.show_member();
	tx2.show_member();

	return 0;
}

