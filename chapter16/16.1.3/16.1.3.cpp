#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Animal
{
private:
	string name;
	int age;
public:
	Animal(string n = "animal", int a = 1) :age(a), name(n){}
	void showInfo()
	{
		cout << name;
		cout << ", age:" << age << endl;
	}
};

class Dog:public Animal
{
private:

public:
	Dog(string n ="Puppy", int a = 0) :Animal(n, a)
	{ }

};

class Cat:public Animal
{
public:
	Cat(string n = "kitty", int a = 0) :Animal(n, a) {};

};

int main()
{
	Animal animal;
	animal.showInfo();

	Dog dog("Dog", 3);
	dog.showInfo();

	Dog mydog;
	mydog.showInfo();

	Cat cat("Cat", 5);
	cat.showInfo();

	return 0;
}