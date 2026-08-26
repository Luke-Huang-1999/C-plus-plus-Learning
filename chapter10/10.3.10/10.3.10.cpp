#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void string_exchange();
void print(string* ptr1, string* ptr2);

int main()
{

	string_exchange();

	return 0;
}

void string_exchange()
{
	//宣告
	string str1 = "Rome was not built in a day.";
	string str2 = "Knowledge is power.";
	string* ptr1 = new string;
	string* ptr2 = new string;

	

	//指向對應的字串
	*ptr1 = str1;
	*ptr2 = str2;
	
	cout << str1[2] << "\n";

	print(ptr1, ptr2);
	
	(*ptr1).swap(*ptr2);
	cout << "\n\n";

	print(ptr1, ptr2);

	delete ptr1;
	ptr1 = nullptr;
	delete ptr2;
	ptr2 = nullptr;
}

void print(string* ptr1, string* ptr2)
{
	cout <<"*ptr1 = " << *ptr1 << "\n";
	cout <<"*ptr2 = " << *ptr2 << "\n";
}