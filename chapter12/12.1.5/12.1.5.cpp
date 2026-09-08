#include<iostream>
using namespace std;

void set(int r);

int main()
{
	set(50);
	set(3.14);//小數部分會無條件捨去；隱式型別轉換（implicit conversion）
	return 0;
}

void set(int r)
{

}