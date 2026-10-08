#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Grand
{
protected:
	string name;
public:
	Grand(string n) :name(n) {};
	void grandAction() const
	{
		cout << name << "有一塊土地!\n";
	}
	virtual ~Grand()
	{
		cout << "~Grand解構子被呼叫了" << endl;
	}
};
class Parent :public Grand
{
public:
	Parent(string n) :Grand(n) {};
	void parentAction() const
	{
		cout << name << "有一間房子!\n";
	}
	virtual ~Parent()
	{
		cout << "~Parent解構子被呼叫了" << endl;
	}
};
class Child :public Parent
{
public:
	Child(string n) :Parent(n) {};
	void childAction() const
	{
		cout << name << "有一台車!\n";
	}
	virtual ~Child()
	{
		cout << "~Child解構子被呼叫了" << endl;
	}
};
int main()
{

	Child* ptr = new Child("Jhon");

	ptr->grandAction();
	ptr->parentAction();
	ptr->childAction();

	delete ptr;


	return 0;
}