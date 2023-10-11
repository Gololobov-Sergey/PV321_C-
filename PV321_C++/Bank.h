#pragma once
#include"Menu.h"


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
	void save(ofstream& out)
	{
		out << currency.kodNBU << " " << IBAN << " " << balance << endl;
	}
	void load(ifstream& in)
	{
		in >> currency.kodNBU >> IBAN >> balance;
		in.get();
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
	void save(ofstream& out)
	{
		out << name << endl;
		out << sizeAcc << endl;
		for (size_t i = 0; i < sizeAcc; i++)
		{
			accounts[i].save(out);
		}
	}
	void load(ifstream& in)
	{
		char buff[80];
		in.getline(buff, 80);
		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
		in >> sizeAcc;
		in.get();
		accounts = new Account[sizeAcc];
		for (size_t i = 0; i < sizeAcc; i++)
		{
			accounts[i].load(in);
		}
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
		vector<string> client;
		for (size_t i = 0; i < sizeClient; i++)
		{
			client.push_back(clients[i].name);
		}
		int choice = Menu::select_vertical(client, HorizontalAlignment::Left, 3);\
		clients[choice].menu();
	}

	void setName(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}

	void load()
	{
		ifstream in("bank.txt");
		if (in.is_open())
		{
			in >> sizeClient;
			in.get();
			clients = new Client[sizeClient];
			for (size_t i = 0; i < sizeClient; i++)
			{
				clients[i].load(in);
			}
		}
		else
		{
			cout << "File not found!" << endl;
		}
	}

	void save()
	{
		ofstream out("bank.txt");
		out << sizeClient << endl;
		for (size_t i = 0; i < sizeClient; i++)
		{
			clients[i].save(out);
		}
	}

	void menu()
	{

		load();

		do
		{
			system("cls");
			cout << "Bank : " << name << endl;
			cout << "===============================" << endl;
			int choice = Menu::select_vertical({
				"Print all Clients", 
				"Work with Clients", 
				"Add Client", 
				"Exit"},
				HorizontalAlignment::Left, 3);
			switch (choice)
			{
			case 0:
				printAllClients();
				break;
			case 1:
				workWithClients();
				break;
			case 2:
				addClient();
				break;
			case 3:
				save();
				exit(0);
			default:
				break;
			}
		} while (true);
	}
};