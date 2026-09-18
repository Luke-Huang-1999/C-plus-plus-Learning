#include <iostream>
using namespace std;

class Box
{
private:
    int width;

public:
    Box(int w = 0)
        : width(w)
    {
    }

    void show()
    {
        cout << "width = " << width << endl;
    }

    Box& operator=(const Box& other)
    {
        if (this != &other)
            width = other.width;

        return *this;
    }
};

int main()
{
    Box b1(30);

    b1 = b1;

    b1.show();

    return 0;
}