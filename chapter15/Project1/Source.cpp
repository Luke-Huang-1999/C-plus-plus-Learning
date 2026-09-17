#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char* name;

public:
    Student(const char* n)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // 請完成拷貝建構子
    Student(const Student& other)
    {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    ~Student()
    {
        delete[] name;
    }

    void show()
    {
        cout << name << endl;
    }
};

int main()
{
    Student s1("Luke");

    Student s2 = s1;

    s1.show();
    s2.show();

    return 0;
}