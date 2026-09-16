#include<iostream>
using namespace std;

class Caaa
{
private:
	int total;
	int* ptr;
public:
	Caaa(int num)
	{
		total = num;
		ptr = new int[total];
		int i;
		for (i = 0; i < total; i++)
		{
			int data;
			cout << "input arr[" << i << "]:";
			cin >> data;
			*(ptr + i) = data;
		}
	}
	void show()
	{
		int i;
		for (i = 0; i < total; i++)
		{
			cout << "arr[" << i << "] = " << *(ptr + i) << endl;
		}
		
	}
	Caaa(const Caaa& other)
	{
		cout << "拷貝建構子被呼叫了。\n";
		total = other.total;
		
		ptr = new int[total];
		int i;
		for (i = 0; i < total; i++)
		{
			*(ptr + i) = *(other.ptr + i);
		}
	}
	~Caaa()
	{
		cout << "解構子被呼叫。\n";
		delete []ptr;
	}
};

int main()
{

	Caaa arr1(3);
	Caaa arr2 = arr1;
	cout << "--aa--" << endl;
	arr1.show();
	cout << "--bb--" << endl;
	arr2.show();
	return 0;
}