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


bool sortByName(Student s1, Student s2)
{
	return compareString(s1.name, s2.name);
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP
	srand(time(0));
	

	Student* st = nullptr;
	int size = 0;

	Student s1 = { new char[] {"Ващенко"}, 10 , 1,  2000 };
	Student s2 = { new char[] {"Проценко"}, 3 , 5,  2002 };
	Student s3 = { new char[] {"Сергатов"}, 22 , 12,  2005 };
	Student s4 = { new char[] {"Андрієвський "}, 5 , 1,  2000 };
	Student s5 = { new char[] {"Гололобов"}, 6 , 5,  2001 };

	addElemArray(st, size, s1);
	addElemArray(st, size, s2);
	addElemArray(st, size, s3);
	addElemArray(st, size, s4);
	addElemArray(st, size, s5);

	while (true)
	{
		system("cls");
		int c = Menu::select_vertical({
		   "Add Student",
		   "Del Student",
		   "Print Student",
		   "Sort by name",
		   "Sort by date" },
		   HorizontalAlignment::Left, 1);

		system("cls");

		Student s;
		switch (c)
		{
		case 0:
			
			cout << "Name :";
			char buff[50];
			cin.getline(buff, 50);
			s.name = new char[strlen(buff) + 1];
			strcpy_s(s.name, strlen(buff) + 1, buff);
			cout << "DD MM YYYY :";
			cin >> s.birthDay.day >> s.birthDay.month >> s.birthDay.year;
			cin.ignore();
			addElemArray(st, size, s);
			break;
		case 1:

			break;
		case 2:
			for (size_t i = 0; i < size; i++)
			{
				st[i].print();
			}
			
			break;
		case 3:
			bubbleSort(st, size, sortByName);
			break;
		case 4:
			bubbleSort(st, size, sortByDate);
			break;
		default:
			break;
		}
		system("pause");
	}

	
}

