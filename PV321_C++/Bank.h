#pragma once


struct Currency
{
	char kodNBU[4];
	float rate;
	char* name;


};


struct Account
{
	Currency currency;
	char IBAN[20];
	int balance;

	void addSum()
	{

	}

	void withdrawSum()
	{

	}

	void menu()
	{
		do
		{
			system("cls");
			cout << "Account : " << IBAN << endl;
			cout << "===============================" << endl;
			cout << "1. Add Sum\n2. Withdraw sum\n3. Return back\n";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				addSum();
				break;
			case 2:
				withdrawSum();
				break;
			case 3:
				return;
			default:
				break;
			}
		} while (true);
	}
};



struct Client
{
	char* name;
	Account* accounts = nullptr;
	int sizeAcc = 0;

	void printAllAccount()
	{

	}


	void workWithAccount()
	{
		system("cls");
		cout << "Work With Account" << endl;
		cout << "===============================" << endl;
		for (size_t i = 0; i < sizeAcc; i++)
		{
			cout << i + 1 << ". " << accounts[i].IBAN << endl;
		}
		int choice;
		cout << "Choice: ";
		cin >> choice;
		accounts[choice - 1].menu();
	}

	void addAccount()
	{

	}

	void menu()
	{
		do
		{
			system("cls");
			cout << "Client : " << name << endl;
			cout << "===============================" << endl;
			cout << "1. Print all Accounts\n2. Work with Account\n3. Add Account\n4. Return back\n";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				printAllAccount();
				break;
			case 2:
				workWithAccount();
				break;
			case 3:
				addAccount();
				break;
			case 4:
				return;
			default:
				break;
			}
		} while (true);
	}
};


struct Bank
{
	char* name;
	Client* clients = nullptr;
	int sizeClient = 0;

	void addClient()
	{

	}


	void printAllClients()
	{
		system("cls");
		cout << "printAllClients" << endl;
		system("pause");
	}

	void workWithClients()
	{
		system("cls");
		cout << "Work With Clients" << endl;
		cout << "===============================" << endl;
		for (size_t i = 0; i < sizeClient; i++)
		{
			cout << i + 1 << ". " << clients[i].name << endl;
		}
		int choice;
		cout << "Choice: ";
		cin >> choice;
		clients[choice - 1].menu();
	}

	void setName(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}

	void menu()
	{
		do
		{
			system("cls");
			cout << "Bank : " << name << endl;
			cout << "===============================" << endl;
			cout << "1. Print all Clients\n2. Work with Clients\n3. Add Client\n4. Exit\n";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				printAllClients();
				break;
			case 2:
				workWithClients();
				break;
			case 3:
				addClient();
				break;
			case 4:
				exit(0);
			default:
				break;
			}
		} while (true);
	}
};