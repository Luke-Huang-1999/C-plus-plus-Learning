#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
protected:
    int num;

public:
    Animal()
    {
        num = 5;
    }

    void show()
    {
        cout << "num = " << num << endl;
    }
};

class Dog : protected Animal
{
public:
    void setNum()
    {
        num = 10;
    }

    void print()
    {
        show();
    }
};

class Puppy : public Dog
{
};

int main()
{
    Puppy p;

    p.setNum();
    p.print();

    // 請想辦法讓這裡可以呼叫 show()

    return 0;
}

/*
| 權限          | A 自己的成員函數 | A 的子類別 | `main()` 裡的 A 物件 |
| ------------- | -------------: | ---------: | ------------------: |
| `private`     |             ✅ |        ❌ |                  ❌ |
| `protected`   |             ✅ |        ✅ |                  ❌ |
| `public`      |             ✅ |        ✅ |                  ✅ |

*/