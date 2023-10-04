#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<algorithm>
#include<conio.h>

#include"function.h"
#include"Timer.h"
#include"Structs.h"

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
		p[i].name = 'A' + i;
		p[i].x = rand() % 10;
		p[i].y = rand() % 10;
	}

	for (size_t i = 0; i < size; i++)
	{
		printPoint(p[i]);
	}

	int i1 = 0, i2 = 0;
	float maxLen = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			float len = len2Point(p[i], p[j]);
			if (len > maxLen)
			{
				maxLen = len;
				i1 = i;
				i2 = j;
			}
		}
	}

	printPoint(p[i1]);
	printPoint(p[i2]);*/



	Date d = { 31, 12, 2023 };
	printDate(addDay(d));

}

