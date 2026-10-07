#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void makeSound() = 0;
};

class FlyCreature
{
public:
	virtual void fly() = 0;
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
};

int main()
{
	Sparrow sparrow;
	Chicken chicken;

	sparrow.makeSound();
	sparrow.fly();
	chicken.makeSound();
	chicken.fly();

	return 0;
}