#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<algorithm>
#include<conio.h>
#include<fstream>

#include"function.h"
#include"Timer.h"
#include"Structs.h"
#include"Bank.h"
#include"funcString.h"

#define SIZE 50
#define ДРУК cout
#define ЦИКЛ(n) for(int i = 0; i < n; i++)
#define SQR(n) (n)*(n)

#define BEGIN {

#define END }

#define CAT(a,b) a##b

#define STATIC

#define setArr setArray


using namespace std;


enum NOMINAL
{
	SIX = 6, SEVEN, EIGHT, NINE, TEN = 100, JACK, QWEEN, KING, ACE
};

enum SUIT
{
	SPADE = 1, CLUB, DIAMOND, HEARH
};


// type name(param)
// {
// 	  body;
// }


inline void starLine(int count = 10, char sym = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << sym;
	}
	cout << endl;
}

template<class T1, class T2, class T3>
auto sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}

float avg3(int a, int b, int c)
{
	float s = (a + b + c) / 3.;
	return s;
}


int lenStr(char* st)
{
	int len = 0;
	while (st[len] != '\0')
	{
		len++;
	}
	return len;
}

bool compareString(char* st1, char* st2)
{
	if (strcmp(st1, st2) == 1)
		return true;
	return false;
}


bool sortByName(Student s1, Student s2)
{
	return compareString(s1.name, s2.name);
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP
	srand(time(0));
	
#pragma region Student

	

	//Student* st = nullptr;
	//int size = 0;

	//Student s1 = { new char[] {"Ващенко"}, 10 , 1,  2000 };
	//Student s2 = { new char[] {"Проценко"}, 3 , 5,  2002 };
	//Student s3 = { new char[] {"Сергатов"}, 22 , 12,  2005 };
	//Student s4 = { new char[] {"Андрієвський "}, 5 , 1,  2000 };
	//Student s5 = { new char[] {"Гололобов Сергій"}, 6 , 5,  2001 };

	//addElemArray(st, size, s1);
	//addElemArray(st, size, s2);
	//addElemArray(st, size, s3);
	//addElemArray(st, size, s4);
	//addElemArray(st, size, s5);

	//while (true)
	//{
	//	system("cls");
	//	int c = Menu::select_vertical({
	//	   "Add Student",
	//	   "Del Student",
	//	   "Print Student",
	//	   "Sort by name",
	//	   "Sort by date" },
	//	   HorizontalAlignment::Left, 1);

	//	system("cls");

	//	Student s;
	//	switch (c)
	//	{
	//	case 0:
	//		
	//		cout << "Name :";
	//		char buff[50];
	//		cin.getline(buff, 50);
	//		s.name = new char[strlen(buff) + 1];
	//		strcpy_s(s.name, strlen(buff) + 1, buff);
	//		cout << "DD MM YYYY :";
	//		cin >> s.birthDay.day >> s.birthDay.month >> s.birthDay.year;
	//		cin.ignore();
	//		addElemArray(st, size, s);
	//		break;
	//	case 1:

	//		break;
	//	case 2:
	//		for (size_t i = 0; i < size; i++)
	//		{
	//			st[i].print();
	//		}
	//		
	//		break;
	//	case 3:
	//		bubbleSort(st, size, sortByName);
	//		break;
	//	case 4:
	//		//bubbleSort(st, size, sortByDate);
	//		break;
	//	default:
	//		break;
	//	}
	//	system("pause");
	//}
#pragma endregion
	

	//int arr[10] = { 2,3,5,6,6,4,32,2,45 };

	//ofstream out("text.txt");
	////out.open("text.txt");
	////out << "Hello C++" << endl;

	//for (size_t i = 0; i < 10; i++)
	//{
	//	out << arr[i] << " ";
	//}
	//out.close();

	//int* b = nullptr;
	//int s = 0;
	//ifstream in("text.txt");
	///*for (size_t i = 0; i < 10; i++)
	//{
	//	in >> b[i];
	//}*/
	//int a;
	//while (in >> a)
	//{
	//	addElemArray(b, s, a);
	//}
	//in.close();
	//printArray(b, s);


	/*ifstream in("text.txt");
	if (in.is_open())
	{
		int a;
		ofstream out("text1.txt");
		while (in >> a)
		{
			if (a % 2 == 0)
			{
				out << a << " ";
			}
		}
		out.close();
	}
	else
	{
		cout << "File not found!" << endl;
	}
	in.close();*/
	

	/*ifstream in("Bank.h");
	char buff[1024];
	while (in.getline(buff, 1024))
	{
		cout << buff << endl;
	}
	in.close();*/

	/*Point p[3];

	ifstream in("text.txt");
	for (size_t i = 0; i < 3; i++)
	{
		in >> p[i].name >> p[i].x >> p[i].y;
	}

	for (size_t i = 0; i < 3; i++)
	{
		p[i].print();
	}*/


	/*ifstream in("text.txt");
	Student s;
	char buff[80];
	in.getline(buff, 80);
	s.name = new char[strlen(buff) + 1];
	strcpy_s(s.name, strlen(buff) + 1, buff);
	in >> s.birthDay.day >> s.birthDay.month >> s.birthDay.year;

	s.print();*/

#ifdef TEST
	SetConsoleTitleA("БАНК - Тестова версія");
#else
	SetConsoleTitleA("БАНК - Робоча версія");
#endif


	Bank bank;
	bank.setName("MONOBANK");

	////
#ifdef TEST
	Currency curr[] = { "UAH", 1, new char[34] {"Українська гривня"},
						"USD", 37.2, new char[34] {"Долар США"},
						"EUR", 40.5, new char[34] {"ЄВРО"} };

	Account acc1 = { curr[0], "UA326157123456789", 1000};
	Account acc5 = { curr[0], "UA326157999999999", 1000};
	Account acc2 = { curr[1], "UA326157144673456", 500};
	Account acc3 = { curr[2], "UA326151249646543", 100};
	Account acc4 = { curr[0], "UA326152344454545", 8000};

	Client c1;
	c1.name = new char[] {"Gololobov SA"};
	addElemArray(c1.accounts, c1.sizeAcc, acc1);
	addElemArray(c1.accounts, c1.sizeAcc, acc3);
	addElemArray(c1.accounts, c1.sizeAcc, acc5);

	Client c2;
	c2.name = new char[] {"Petrov FD"};
	addElemArray(c2.accounts, c2.sizeAcc, acc2);
	addElemArray(c2.accounts, c2.sizeAcc, acc4);

	addElemArray(bank.clients, bank.sizeClient, c1);
	addElemArray(bank.clients, bank.sizeClient, c2);
	////
#endif

	bank.menu();



	//ofstream out("data.bin", ios::binary);
	//out.write((char*)&arr, sizeof(arr));

	/*for (size_t i = 0; i < 10; i++)
	{
		out.write((char*)&arr[i], sizeof(int));
	}*/

	/*int aaa[10];
	ifstream in("data.bin", ios::binary);
	in.read((char*)&aaa, sizeof(aaa));

	printArray(aaa, 10);*/


	/*Student s;
	char buff[80];
	cin.getline(buff, 80);
	s.name = new char[strlen(buff) + 1];
	strcpy_s(s.name, strlen(buff) + 1, buff);
	s.birthDay = { 1,1,2000 };

	ofstream out("st.bin", ios::binary);
	out.write((char*)&s, sizeof(Student));*/

	/*Student s;
	ifstream in("st.bin", ios::binary);
	in.read((char*)&s, sizeof(Student));
	s.print();*/


	//cout << countWord("jwerty woieuro wieuro wieuroweiru") << endl;

    /*int arr[SIZE];
	setArray(arr, SIZE);
	ЦИКЛ(5)
	BEGIN
		ДРУК << "Hello" << endl;
	END
	cout << SQR(5.2 + 1) << endl;


#undef SIZE

#define SIZE 100

	int bbb[SIZE];

	int CAT(aa, 1) = 10;
	cout << aa1 << endl;*/


	//int arr[10];
	//int* arr = new int[10];


#ifdef STATIC
	int arr[10];
#else
	int* arr = new int[10];
#endif

	setArr(arr, 10);

}

