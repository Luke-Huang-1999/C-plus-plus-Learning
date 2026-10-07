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
};
class Parent :public Grand
{
public:
	Parent(string n) :Grand(n) {};
	void parentAction() const
	{
		cout << name << "有一間房子!\n";
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
};
int main()
{
	Child child("John");

	child.grandAction();
	child.parentAction();
	child.childAction();

	return 0;
}