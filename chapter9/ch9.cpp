#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<string>

void swap(int* x, int* y);
int square(int a);
double triangle(double base, double height);
double rectangle(double height, double width);
void showarea(double x, double y, double (*pf)(double, double));

void sort(int* a, int* b, int* c);
void unit_trans(float* dist_origin, float* dist);

int* find_min(int* a, int* b, int* c);
void avg(int* arr);

void square(int* arr);
void display(char* ptr, int n);
void updown_convert();

void star();

int main()
{
	star();

	return 0;
}

void star()
{
	char str[30];
	cout << "請輸入一個字串：";
	cin.getline(str, 30);

	int i = 0;
	while (str[i] != '\0')
	{
		if (*(str + i) == ' ')
			*(str + i) = '*';
		i++;
	}
	cout << "替換後的字串 = " << str << "\n";
}

void updown_convert()
{
	//宣告
	char str1[30];
	char str2[30];
	int i = 0;
	//接收
	cout << "Input source string：";
	cin.getline(str1, 30);
	
	//複製字串
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';

	//轉換之前
	cout << "Before process...\n" << "string = ";
	cout << str1 << "\n\n\n";

	//轉換
	i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] >= 'a' && str2[i] <= 'z')
			str2[i] = str2[i] - 32;
		else if (str2[i] >= 'A' && str2[i] <= 'Z')
			str2[i] = str2[i] + 32;
		i++;
	}

	//轉換之後
	cout << "After process...\n" << "string = ";
	cout << str2 << "\n";

}


void display(char* ptr, int n)
{
	ptr = ptr + 14;

	cout << ptr << "\n";
}

void showarea(double x, double y, double (*pf)(double, double))
{
	cout << (*pf)(x, y) << "\n";
}

double rectangle(double height, double width)
{
	return (height * width);
}

double triangle(double base, double height)
{
	return (base * height) / 2;
}

int square(int a)
{
	return (a * a);
}

void swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort(int* a, int* b, int* c)
{
	int nums[3] = { *a, *b, *c };
	int tmp;
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < (2 - i); j++)
		{
			if (nums[j] < nums[j + 1])
			{
				tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}

	*a = nums[0];
	*b = nums[1];
	*c = nums[2];
}

void unit_trans(float* dist_origin, float* dist)
{
	*dist = *dist_origin * 0.394;
}

int* find_min(int* a, int* b, int* c)
{
	int* min = a;
	int tmp;

	if (*min > *b)
	{
		tmp = *min;
		*min = *b;
		*b = tmp;
	}
	if (*min > *c)
	{
		tmp = *min;
		*min = *c;
		*c = tmp;
	}
	return min;
}

void avg(int* arr)
{
	int total = 0;
	float average = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		total = total + *(arr + i);
	}
	average = total / 10.0;
	cout << "平均 = " << average;

	return;
}

void square(int* arr)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		*(arr + i) = *(arr + i) * *(arr + i);
	}

}