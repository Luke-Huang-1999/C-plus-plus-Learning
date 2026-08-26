#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void find_diff(int a[4][3]);

int main()
{

	int a[4][3] = { {26,65,37},{10,32,47},{69,76,18} ,{40,74,32} };
	find_diff(a);
	
	return 0;
}

void find_diff(int a[4][3])
{
	//宣告max and min，假設最大最小皆為第一個元素。
	int max = *(*(a + 0) + 0);
	int min = *(*(a + 0) + 0);
	int result = 0;

	int i = 0;
	while (i < 12)
	{
		if (max < *(*a + i))
			max = *(*a + i);
		if (min > *(*a + i))
			min = *(*a + i);
		i++;
	}

	result = max - min;
	cout << "result = " << result << "\n";
}