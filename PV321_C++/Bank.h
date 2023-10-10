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

	void print()
	{
		cout << currency.kodNBU << " " << IBAN << " " << setw(8) << balance << endl;
	}

	void menu()
	{
		do
		{
			system("cls");
			cout << "Account : " << currency.kodNBU << " " << IBAN << endl;
			cout << "===============================" << endl;
			cout << "1. Add Sum\n2. Withdraw sum\n0. Return back\n";
			int choice;
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1:
				addSum();
				break;
			case 2:
				withdrawSum();
				break;
			case 0:
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

	
	void print()
	{
		
		cout << name << endl;
		for (size_t i = 0; i < sizeAcc; i++)
		{
			cout << "\t";
			accounts[i].print();
		}
	}

	void workWithAccount()
	{
		system("cls");
		cout << "Work With Account" << endl;
		cout << "===============================" << endl;
		for (size_t i = 0; i < sizeAcc; i++)
		{
			cout << i + 1 << ". " << accounts[i].currency.kodNBU << " " << accounts[i].IBAN << endl;
		}
		int choice;
		cout << "Choice: ";
		cin >> choice;
		cin.ignore();
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
			cout << "1. Print all Accounts\n2. Work with Account\n3. Add Account\n0. Return back\n";
			int choice;
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1:
				system("cls");
				print();
				system("pause");
				break;
			case 2:
				workWithAccount();
				break;
			case 3:
				addAccount();
				break;
			case 0:
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
		system("cls");
		cout << "Add Clients" << endl;
		cout << "===============================" << endl;
		char buff[80];
		cout << "Enter name : ";
		cin.getline(buff, 80);
		Client c;
		c.name = new char[strlen(buff) + 1];
		strcpy_s(c.name, strlen(buff) + 1, buff);
		addElemArray(clients, sizeClient, c);
		cout << "Client Added!" << endl;
		system("pause");
	}


	void printAllClients()
	{
		system("cls");
		cout << " All Clients" << endl;
		cout << "==========================================" << endl;
		for (size_t i = 0; i < sizeClient; i++)
		{
			cout << setw(3) << i + 1 << " ";
			clients[i].print();
		}
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
		cin.ignore();
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
			cout << "1. Print all Clients\n2. Work with Clients\n3. Add Client\n0. Exit\n";
			int choice;
			cin >> choice;
			cin.ignore();
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
			case 0:
				exit(0);
			default:
				break;
			}
		} while (true);
	}
};