#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
	virtual ~Animal()
	{
		cout << "~Animal解構子被呼叫了..." << endl;
	}
};

class FlyCreature
{
public:
	virtual void fly() = 0;
	virtual ~FlyCreature()
	{
		cout << "~FlyCreature解構子被呼叫了..." << endl;
	}
};

class Sparrow :public Animal, public FlyCreature
{
public:
	virtual void makeSound()
	{
		cout << "麻雀叫聲：吱吱吱!";
	}
	virtual void fly()
	{
		cout << "飛行能力：飛高高!" << endl;
	}
	virtual ~Sparrow()
	{
		cout << "~Sparrow()解構子被呼叫了..." << endl;
	}
};

class Chicken :public Animal, public FlyCreature
{
public:
	virtual void makeSound()
	{
		cout << "小雞叫聲：咕咕咕!";
	}
	virtual void fly()
	{
		cout << "飛行能力：飛低低!" << endl;
	}
	virtual ~Chicken()
	{
		cout << "~Chicken解構子被呼叫了..." << endl;
	}
};

int main()
{
	Animal* ptr = new Sparrow();
	delete ptr;

	cout << "\n";

	ptr = new Chicken();
	delete ptr;


	return 0;
}