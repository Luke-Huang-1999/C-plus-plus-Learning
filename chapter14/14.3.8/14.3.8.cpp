#include<iostream>

using namespace std;

class Caaa
{
private:
	int m, n;
public:
	Caaa(int m1,int n1):m(m1), n(n1)
	{ }
	Caaa(const Caaa& other)
	{
		cout << "拷貝建構子被呼叫了。\n";
		m = other.m;
		n = other.n;
	}
	void show()
	{
		cout << "m = " << m << ", n = " << n << endl;
	}
};

int main()
{
	Caaa obj1(10, 20);
	Caaa obj2 = obj1;//利用 obj1 建立一個新的 obj2。

	obj1.show();
	obj2.show();


	return 0;
}