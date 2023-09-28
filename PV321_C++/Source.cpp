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


int lenStr(char* st)
{
	int len = 0;
	while (st[len] != '\0')
	{
		len++;
	}
	return len;
}

char* replaceSymbol(const char* str, char old, char _new)
{
	int len = strlen(str);
	char* res = new char[len + 1];
	for (size_t i = 0; i < len + 1; i++)
	{
		if (str[i] == old) 
		{
			res[i] = _new;
		}
		else
		{
			res[i] = str[i];
		}
	}
	return res;
}


int countWord(const char* str)
{
	int word = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			word++;
		}
		i++;
	}
	return word;
}

char* delSubStr(const char* str, const char* old)
{
	const char* temp = str;
	int len = strlen(str);
	char* res = new char[len + 1];
	res[0] = '\0';
	const char* p = strstr(temp, old);
	while (p != nullptr)
	{
		strncat_s(res, len+1, temp, p - temp);
		temp = p + strlen(old);
		p = strstr(temp, old);
	}

	strcat_s(res, len+1, temp);
	return res;
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


	/*int bullet[3] = { 50, 50, 50 };

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
	}*/


	//char st[] = "Hello"; // { 'H', 'e', 'l', 'l', 'o', '\0'};
	//cout << st << endl;
	//cout << st[4] << endl;
	//st[2] = '\0';
	//cout << st + 2 << endl;

	//char buff[40];
	//cin.getline(buff, 40);
	//cout << buff << endl;

	//cout << strlen(name) << endl;
	/*int len = strlen(buff);
	char* str = new char[len + 1];
	strcpy_s(str, len+1, buff);

	cout << str << endl;*/

	//char* p = replaceSymbol(buff, 'a', 'o');
	//cout << p << endl;

	//char st1[80] = "mama mila ramu";
	//char st2[80];

	//cin.getline(st1, 80);
	//cin.getline(st2, 80);

	//strcpy_s(st1, 80, st2);
	//cout << st1 << endl;

	//strncpy_s(st1, 80, st2 + 5, 4);
	//cout << st1 << endl;


	//strcat_s(st1, 80, st2);
	//cout << st1 << endl;

	//strncat_s(st1, 80, st2, 4);
	//cout << st1 << endl;

	//cout << strcmp(st1, st2) << endl;
	//cout << strncmp(st1, st2, 5) << endl;
	//cout << _stricmp(st1, st2) << endl;
	//cout << _strnicmp(st1, st2, 4) << endl;

	
	//char* p = strchr(st1, 'a');
	/*char* p = strrchr(st1, 'a');
	if(p != nullptr)
		cout << p << endl;*/


	/*char* p = strstr(st1, "mama");
	if (p != nullptr)
		cout << p << endl;*/

	//_strlwr_s(st1);
	//_strupr_s(st1);
	//cout << st1 << endl;


	//cout << _strrev(st1) << endl;


	//_strset_s(st1, '\0');
	//cout << st1 << endl;

	//int a = _atoi_l(st1, LC_ALL);
	//double a = _atof_l(st1, LC_ALL);
	//long a = _atol_l(st1, LC_ALL);
	//cout << a << endl;

	//_itoa_s(1123345, st1, 36);
	//cout << st1 << endl;

	/*int arr[] = { 1,2,3 };
	cout << arr << endl;*/


	//cout << countWord(st1) << endl;

	//char* p = delSubStr(st1, " ");
	//cout << p << endl;


	/*int a = 5;
	int* p = &a;
	int** p1 = &p;

	cout << *p << endl;
	cout << p1 << endl;
	cout << **p1 << endl;*/

	//int row = 5;
	//int col = 4;

	//int** p = nullptr;
	//createArray2D(p, row, col);
	//setArray2D(p, row, col);
	//printArray2D(p, row, col);

	//int* b = new int[col] {1, 2, 3, 4};

	//addRowArray2D(p, row, col);
	//cout << endl;
	//printArray2D(p, row, col);

	//delRowArray2D(p, row);
	//cout << endl;
	//printArray2D(p, row, col);

	////int** p1 = createArray2D<int>(row, col);


	//swap(p[0], p[row - 1]);

	///*for (size_t i = 0; i < col; i++)
	//{
	//	swap(p[0][i], p[row - 1][i]);
	//}*/
	//cout << endl;
	//printArray2D(p, row, col);


	//deleteArray2D(p, row);

	/*int row, col;
	cin >> row >> col;
	int** A = createArray2D<int>(row, col);
	int* B = new int[row];
	setArray(B, row);
	printArray(B, row);
	cout << endl;
	setArray2D(A, row, col);
	printArray2D(A, row, col);

	for (size_t i = 0; i < row; i++)
	{
		swap(A[i][i], B[i]);
	}

	cout << endl;
	printArray(B, row);
	cout << endl;
	printArray2D(A, row, col);*/


	int row, col;
	cin >> row >> col;
	int** A = createArray2D<int>(row, col);
	setArray2D(A, row, col);
	printArray2D(A, row, col);

	//
	for (size_t i = 0; i < col-1; i++)
	{
		for (size_t j = 0; j < col-1-i; j++)
		{
			if (A[0][j] > A[0][j + 1]) 
			{
				for (size_t k = 0; k < row; k++)
				{
					swap(A[k][j], A[k][j+1]);
				}
			}
		}
	}


	SetColor(LightRed, Black);
	cout << endl;
	printArray2D(A, row, col);
	SetColor(LightGray, Black);
}


void func(int a, int b)
{
	cout << "func" << endl;
}