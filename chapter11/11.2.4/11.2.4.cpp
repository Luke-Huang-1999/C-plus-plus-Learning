#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

struct cuboid
{
	int length;
	int width;
	int height;
}data;

void volume(cuboid data, int& vol);

int main()
{
	cuboid data = { 0 };
	int vol = 0;

	volume(data, vol);

	cout << "體積 = " << vol << "\n";

	return 0;
}

void volume(cuboid data, int& vol)
{
	int i;

	data.height = 3;
	data.length = 10;
	data.width = 2;

	vol = data.height * data.length * data.width;
}