#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start binod account with? \n";
	cin >> openBalance;
	account binod(openBalance);
	int paisa;
	cout << "enter the amount you want to add in binod's account? \n";
	cin >> paisa;
	binod.Credit(paisa);
	cout << binod.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to remove from binod's account? \n";
	cin >> paisa1;
	binod.Debit(paisa1);
	cout << binod.getBalance() << "\n";
	cout << "enter the amount you want to start Ayush account with? \n";
	cin >> openBalance;
	account ayush(openBalance);
	cout << "enter the amount you want to add in Ayush's account? \n";
	cin >> paisa;
	ayush.Debit(paisa);
	cout << ayush.getBalance() << "\n";
	cout << "enter the amount you want to removein Ayush's account? \n";
	cin >> paisa1;
	ayush.Debit(paisa1);
	cout << ayush.getBalance() << "\n";






	return 0;
}
