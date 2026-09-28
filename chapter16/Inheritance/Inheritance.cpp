#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

class Employee
{
protected:
    string name;
    int salary;
public:
    Employee(string n = "Luke", int s = 30000) :name(n), salary(s) {};

    void show_info()
    {
        cout << "姓名：" << name << ", 薪資 = " << salary << endl;
    }

};

class Manager:public Employee
{
public:
    void show()
    {
        show_info();
    }
    void raiseSalary()
    {
        salary += 5000;
    }
};

int main()
{
    Manager m;

    m.raiseSalary();
    m.show();

    return 0;
}

/*
| 權限          | A 自己的成員函數 | A 的子類別 | `main()` 裡的 A 物件 |
| ------------- | -------------: | ---------: | ------------------: |
| `private`     |             ✅ |        ❌ |                  ❌ |
| `protected`   |             ✅ |        ✅ |                  ❌ |
| `public`      |             ✅ |        ✅ |                  ✅ |

*/