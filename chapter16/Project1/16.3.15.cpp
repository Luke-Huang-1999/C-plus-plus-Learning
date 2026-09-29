#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Animal
{
private:
	string name;
	int age;
public:
	Animal(string n = "animal", int a = 1) :name(n), age(a) {};
	void showInfo() const
	{
		cout << name << ", age:" << age << "		";
	}
	void makeSound()
	{
		cout << "Animal sound" << endl;
	}
};

class Dog :public Animal
{
public:
	Dog(string n = "puppy", int a = 0) :Animal(n, a) {};
	void makeSound()
	{
		cout << "Woof!" << endl;
	}
};

class Cat :public Animal
{
public:
	Cat(string n = "kitty", int a = 0) :Animal(n, a) {};
	void makeSound()
	{
		cout << "Meow!" << endl;
	}
};

int main()
{
	Animal animal;
	animal.showInfo();
	animal.makeSound();
	Dog dog("Dog", 3);
	dog.showInfo();
	dog.makeSound();
	Cat cat("Cat", 5);
	cat.showInfo();
	cat.makeSound();
	return 0;
}