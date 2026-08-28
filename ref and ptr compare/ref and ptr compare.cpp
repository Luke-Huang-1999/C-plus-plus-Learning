#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void swap_ref(int& x, int& y);
void swap_ptr(int* x, int* y);

int& min_ref(int& x, int& y);
int* min_ptr(int* x, int* y);

int* find_min(int* x, int* y);

int& max_ref(int& x, int& y);
int* max_ptr(int* x, int* y);

//void add_ref(int& x);
//void add_ptr(int* x);

void add_ptr(int* x);
void add_ref(int& x);

void set_zero_ref(int& x);
void set_zero_ptr(int* x);

void swap_pointer(int*& p, int*& q);

void change(int& x, int* p, int*& q);

int main()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int* q = &b;

	cout << "呼叫函數前\n";
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "p = " << p << ", q = " << q << "\n";

	change(a, p, q);

	cout << "呼叫函數後\n";
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "p = " << p << ", q = " << q << "\n";
	
	return 0;
}

void swap_ref(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void swap_ptr(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int& min_ref(int& x, int& y)
{
	if (x < y)
		return x;
	else
		return y;
}

int* min_ptr(int* x, int* y)
{
	if (*x < *y)
		return x;
	else
		return y;
}

int* find_min(int* x, int* y)
{
	if (x == nullptr && y == nullptr)
		return nullptr;
	else if (x == nullptr)
		return y;
	else if (y == nullptr)
		return x;
	else
		return min_ptr(x, y);
}

int& max_ref(int& x, int& y)
{
	if (x > y)
		return x;
	else
		return y;
}

int* max_ptr(int* x, int* y)
{
	if (*x > *y)
		return x;
	else
		return y;
}

//void add_ref(int& x)
//{
//	x = x + 10;
//}
//
//void add_ptr(int* x)
//{
//	*x = *x + 10;
//}

void add_ptr(int* x)
{
	if (x != nullptr)
		*x = *x + 10;
}

void add_ref(int& x)
{
	x += 10;
}

void set_zero_ref(int& x)
{
	x = 0;
}

void set_zero_ptr(int* x)
{
	if (x != nullptr)
		*x = 0;
}

void swap_pointer(int*& p, int*& q)			//指標的參照
{
	int* tmp = nullptr;
	tmp = p;
	p = q;
	q = tmp;
}

void change(int& x, int* p, int*& q)
{
	//透過 x 把 a 改成 100
	x = 100;

	//透過 p 把 b 改成 200
	p = q;
	*p = 200;

	//把 q 的指向改成 a
	q = &x;
}
/*
透過 x 把 a 改成 100
透過 p 把 b 改成 200 —— 注意：目前 p 指向的是 a，所以你要想辦法處理
把 q 的指向改成 a
*/