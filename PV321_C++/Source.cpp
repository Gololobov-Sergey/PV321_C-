#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<algorithm>
#include<conio.h>

#include"function.h"
#include"Timer.h"
#include"Structs.h"
#include"Bank.h"

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






int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP
	srand(time(0));
	
	/*int row, col;
	cin >> row >> col;
	int** A = createArray2D<int>(row, col);
	setArray2D(A, row, col);
	printArray2D(A, row, col);

	for (size_t i = 0; i < row; i++)
	{
		if (linerSearch(A[i], col, 0) != -1)
			delRowPosArray2D(A, row, i--);
	}

	cout << endl;
	printArray2D(A, row, col);*/



	//int count = 5;
	//char** pib = new char* [count];
	//for (size_t i = 0; i < count; i++)
	//{
	//	char buff[1024];
	//	cin.getline(buff, 1024);
	//	int len = strlen(buff);
	//	pib[i] = new char[len + 1];
	//	strcpy_s(pib[i], len+1, buff);
	//}

	//bubbleSort(pib, count, compareString);

	///*for (size_t i = 0; i < count - 1; i++)
	//{
	//	for (size_t j = 0; j < count - 1 - i; j++)
	//	{
	//		if (strcmp(pib[j], pib[j + 1]) == 1)
	//		{
	//			swap(pib[j], pib[j + 1]);
	//		}
	//	}
	//}*/

	//cout << endl;
	//for (size_t i = 0; i < count; i++)
	//{
	//	cout << pib[i] << endl;
	//}


	/*void** p = new void*[2];
	p[0] = new char[20];
	strcpy_s((char*)p[0], 20, "mama");
	p[1] = new int;
	*((int*)p[1]) = 10;

	cout << (char*)p[0] << endl;
	cout << *((int*)p[1]) << endl;

	int* aa = new int[10];
	setArray(aa, 10);
	printArray(aa);*/


	/*int size;
	cin >> size;
	int* a = new int[size];
	setArray(a, size);
	printArray(a, size);

	int*** p = ArrToArr2D(a, size);

	printArr3D(p);*/



	/*Point p;
	p.x = 10;
	p.y = 2;
	p.name = 'A';

	Point p1 = { 'B', 3, 5 };

	printPoint(p);
	printPoint(p1);

	Point p3[] = { 'C', 4, 5, 'D', 2, 7, 'E', 5, 8 };
	for (size_t i = 0; i < 3; i++)
	{
		printPoint(p3[i]);
	}

	Point* p4 = new Point[5];
	p4[2].x = 12;*/


	/*const int size = 5;
	Point p[size];

	for (size_t i = 0; i < size; i++)
	{
		p[i].set('A' + i, rand() % 10, rand() % 10);
	}

	for (size_t i = 0; i < size; i++)
	{
		p[i].print();
	}

	int i1 = 0, i2 = 0;
	float maxLen = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			float len = p[i].len2Point(p[j]);
			if (len > maxLen)
			{
				maxLen = len;
				i1 = i;
				i2 = j;
			}
		}
	}

	p[i1].print();
	p[i2].print();*/



	/*Date d = { 31, 12, 2023 };
	printDate(addDay(d));*/



	/*Point p1 = { 'B', 3, 5 };
	p1.print();*/

	/*Car car;
	car.move();
	car.beep();*/

	Bank bank;
	bank.setName("MONOBANK");

	////

	Currency curr[] = { "UAH", 1, new char[34] {"Українська гривня"},
						"USD", 1, new char[34] {"Долар США"},
						"EUR", 1, new char[34] {"ЄВРО"} };

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

	bank.menu();

}

