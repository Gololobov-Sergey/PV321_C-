﻿#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<algorithm>

#include"function.h"
#include"Timer.h"

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

int inc(int a)
{
	a++;
	return a;
}

void func(int, int);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	/*int a = 5;
	cout << a << endl;
	cout << typeid(a).name() << endl;
	cout << sizeof(a) << endl;
	cout << &a << endl;

	int* pa = &a;
	cout << pa << endl;
	cout << *pa << endl;
	*pa = 100;

	cout << a << endl;

	int b = 44;
	pa = &b;
	*pa = 500;

	cout << b << endl;

	float d = 2.3f;
	float* pd = &d;*/


	//int a = 5;
	//int* pa = &a;
	//int b = 5;
	//int* pb = nullptr; 
	//cout << pb << endl;

	///*cout << pa << endl;
	//cout << pa - 1 << endl;
	//pa = pa - 1;
	//cout << *pa << endl;*/

	//cout << (pa != pb) << endl;

	const int size = 5;
	float arr[size];
	setArray(arr, size, 4);
	printArray(arr, size);

	/*for (size_t i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	for (int* i = arr; i <= arr + 4; i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/

	//arr++;  no!!!
	/*int* p = arr;
	p++;*/

	//cout << *(arr + 0) << endl; // arr[0]
	//cout << *(arr + 1) << endl; // arr[1]
	//cout << *(arr + 2) << endl;

	//Використовуючи покажчики та оператор розіменування, визначити 
	// найбільше з двох чисел.

	/*int a = 5, b = 4;
	int* pa = &a, * pb = &b;
	if (*pa > *pb)
	{
		cout << "A >" << endl;
	}
	else
	{
		cout << "B >" << endl;
	}*/

	// Використовуючи покажчики та оператор розіменування, обміняти 
	// місцями значення двох змінних.

	/*int* T = pa;
	pa = pb;
	pb = T;

	cout << a << endl;
	cout << b << endl;
	cout << *pa << endl;
	cout << *pb << endl;*/



	/*int amount = 0;
	for (int* i = arr; i <= arr + 9; i++)
	{
		amount += *i;
	}
	cout << amount << endl;*/

	int n = 5;
	//cin >> n;
	int* p = new int[n];
	setArray(p, n);
	printArray(p, n);
	
	p = addElemArray(p, &n, 999);

	printArray(p, n);
	cin >> n;
	delete[] p;
}


void func(int a, int b)
{
	cout << "func" << endl;
}