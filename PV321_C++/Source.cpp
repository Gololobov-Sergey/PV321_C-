#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<algorithm>
#include<conio.h>

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

void hello() 
{
	cout << "Hello" << endl;
}

void goodbye()
{
	cout << "Goodbye" << endl;
}


int sum(int a, int b) 
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}


void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;

	cout << a << endl;
	cout << b << endl;
}

void gun(int* bullet)
{
	cout << "->" << endl;
	bullet[0]--;
}

void mashineGun(int* bullet)
{
	cout << "-> -> -> -> ->" << endl;
	bullet[1] -= 5;
}

void arrow(int* bullet)
{
	cout << ">>----->" << endl;
	bullet[2]--;
}

void(*logic(int* bullet))(int*)
{
	void(*weapon[])(int*) = { gun, mashineGun, arrow };

	return weapon[linerSearch(bullet, 3, maxValueArray(bullet, 3))];
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	
	// type(*name)(param);

	/*void(*message)();
	message = hello;
	message();
	message = goodbye;
	message();

	void(*arrFunc[])() = { hello, goodbye };
	for (size_t i = 0; i < 2; i++)
	{
		arrFunc[i]();
	}*/


	/*int a, b, res, choice;
	cin >> a >> b;
	cout << "1 +, 2 -, 3 *, 4 / - ";
	cin >> choice;
	int(*operation[])(int, int) = {sum, diff, mult, division};
	res = operation[choice - 1](a, b);
	cout << res << endl;*/


	//void(*sorting)(int*, int) = bubbleSort;

	//void(*add)(int*&, int&, const int&) = addElemArray;

	/*int a = 5, b = 10;
	my_swap(a, b);
	cout << a << endl;
	cout << b << endl;*/

	/*int size = 30;
	int* arr = new int[size];
	setArray(arr, size, 0, 50);
	printArray(arr, size);
	bubbleSort(arr, size, lastNumber);
	printArray(arr, size);*/


	int bullet[3] = { 50, 50, 50 };

	void(*shot)(int*);
	while (true)
	{
		if (_kbhit())
		{
			char c = _getch();
			if (c == 'c')
			{
				shot = logic(bullet);
			}
			if (c == 'g')
			{
				shot = gun;
			}
			if (c == 'm')
			{
				shot = mashineGun;
			}
			if (c == 'a')
			{
				shot = arrow;
			}
			shot(bullet);
		}
	}
	


}


void func(int a, int b)
{
	cout << "func" << endl;
}