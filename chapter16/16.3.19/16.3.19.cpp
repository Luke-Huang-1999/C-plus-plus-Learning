#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Animal
{
protected:
	string name;
	int age;
public:
	Animal(string n = "animal", int a = 1) :age(a), name(n) {}
	void showInfo()
	{
		cout << name;
		cout << ", age:" << age << endl;
	}
	Animal(const Animal& Ani)
	{
		cout << "Animal()拷貝建構子被呼叫了。\n";
		name = Ani.name;
		age = Ani.age;
	}
};

class Dog :public Animal
{
private:

public:
	Dog(string n = "Puppy", int a = 0) :Animal(n, a)
	{
	}
	Dog(const Dog& dog):Animal(dog)
	{
		cout << "Dog()拷貝建構子被呼叫了。\n";
		name = dog.name;
		age = dog.age;
	}

};

class Cat :public Animal
{
public:
	Cat(string n = "kitty", int a = 0) :Animal(n, a) {};
	Cat(const Cat& ca)
	{
		cout << "Cat()拷貝建構子被呼叫了。\n";
	}
};

int main()
{
	Animal animal;
	animal.showInfo();

	Dog dog("Dog", 3);
	dog.showInfo();

	Cat cat("Cat", 5);
	cat.showInfo();


	Animal animalCopy(animal);
	animal.showInfo();

	Dog dogCopy(dog);
	dogCopy.showInfo();

	return 0;
}