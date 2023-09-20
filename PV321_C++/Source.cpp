#include<iostream>
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


	int a = 5;
	int* pa = &a;
	int b = 5;
	int* pb = nullptr; 
	cout << pb << endl;

	/*cout << pa << endl;
	cout << pa - 1 << endl;
	pa = pa - 1;
	cout << *pa << endl;*/

	cout << (pa != pb) << endl;

}


void func(int a, int b)
{
	cout << "func" << endl;
}