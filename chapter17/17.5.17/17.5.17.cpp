#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
template<class T, int n>
class CArray
{
protected:
	T arr[n];
public:
	CArray()
	{
		for (int i = 0, i < n; i++)
		{
			arr[i] = 0;
		}
	}
	void set_data();
	void show_data();
	

};
template<class T>
void CArray<T, n>::set_data()
{

}


int main()
{


	return 0;
}