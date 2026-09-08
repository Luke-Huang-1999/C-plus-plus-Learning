#include<iostream>
using namespace std;
class Crectangle
{
public:
	int width;
	int height;
};

int main()
{
	Crectangle rect1;
	rect1.width = 15;
	rect1.height = 10;

	cout << "面積為 " << rect1.width * rect1.height;

	return 0;
}
