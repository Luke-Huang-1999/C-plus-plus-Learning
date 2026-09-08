#include<iostream>

using namespace std;

class my_data
{
public:
	int age;
	int weight;
};
/*
該class my_data內部成員宣告兩個整數型態的資料成員，
這兩個資料成員被public修飾為公開，
代表在class外部可以透過物件直接存取或修改。
*/
int main()
{
	my_data a;//宣告一個my_data類別的物件a
	a.age = 18;//物件a內部成員age賦值18
	a.weight = 57;//物件a內部成員weight賦值57
	cout << "age = " << a.age << "\n";
	cout << "weight = " << a.weight << "\n";

	return 0;
}