#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
	string id;
	string name;
	double balance;
public:
	BankAccount(string i, string n, double b) :id(i), name(n), balance(b)
	{ }

	void show()
	{
		cout << "\n**** 帳戶資訊 ****\n";
		cout << "帳戶編號" << id << "\n"
			 << "持有人姓名" << name << "\n"
			 << "目前餘額" << balance << "\n";
	}
	//transfer() 雖然不是 BankAccount 的成員函數，但被授予存取 BankAccount private 成員的權限。
	friend void transfer(BankAccount& from, BankAccount& to, double money);
};




int main()
{
	BankAccount alice("A001", "Alice", 10000);
	BankAccount bob("B001", "bob", 5000);
	//轉帳前
	alice.show();
	bob.show();

	//轉帳
	transfer(alice, bob, 3000);

	//轉帳後
	alice.show();
	bob.show();

	return 0;
}

void transfer(BankAccount& from, BankAccount& to, double money)
{
	if (from.balance >= money)
	{
		from.balance -= money;
		to.balance += money;
		cout << "\n轉帳成功\n";
	}
	else
	{
		cout << "餘額不足\n";
	}
}