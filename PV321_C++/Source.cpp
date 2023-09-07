#include<iostream>
#include<Windows.h>
using namespace std;


enum NOMINAL
{
	SIX = 6, SEVEN, EIGHT, NINE, TEN = 100, JACK, QWEEN, KING, ACE
};

enum SUIT
{
	SPADE = 1, CLUB, DIAMOND, HEARH
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	/*cout << "Hello C++" << endl;
	cout << "ћене звати —ерг≥й" << endl;
	cout << "ћене \"звати\" —ерг≥й" << endl;
	cout << 4545 << " \\Hello\\" << endl;*/

	// bool        - 1b

	// char        - 1b

	// short       - 2b
	// int         - 4b (p)
	// long        - 4b
	// long long   - 8b

	// float       - 4b  (.7)
	// double      - 8b  (.15)
	// long double - 10b

	/*int year = 2023.9999;
	cout << year << endl;

	double d = 5.51;

	char t = 'a' + 3;
	cout << t << endl;

	int a = 5, b = 2, c;

	float f = (float)a / b;
	cout << f << endl;

	const float pi = 3.14;

	unsigned int g = -1;
	cout << g << endl;*/

	// - ++ --
	// + - * / % += -= *= /= %=

	//int a = 5, b = 4, c;
	/*a = +a;

	a = a + b;
	a += b;

	a = a + 1;
	a += 1;
	a++;
	++a;*/

	//c = a-- * (++b + --a/b);


	//cout << a << endl;   //5
	//cout << a++ << endl; //5
	//cout << ++a << endl; //7
	//cout << a << endl;   //7


	/*cout << b << endl;
	cout << c << endl;*/


	// !
	// < > <= >= == != &&(* and) ||(+ or) ^(xor)

	// ƒано трехзначное число.¬ нем зачеркнули первую слева цифру и
	// приписали ее справа.¬ывести полученное число.

	/*int a, a1, a2, a3, b;
	cin >> a;
	a3 = a % 10;
	a2 = a / 10 % 10;
	a1 = a / 100;
	b = a2 * 100 + a3 * 10 + a1;
	cout << b << endl;*/



	//ƒаны координаты двух различных полей шахматной доски x1, y1,
	//x2, y2(целые числа, лежащие в диапазоне 1Ц8).ѕроверить истинность вы -
	//сказывани€: ЂЋадь€ за один ход может перейти с одного пол€ на другоеї.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = y1 == y2 || x1 == x2;*/


	// ƒаны координаты двух различных полей шахматной доски x1, y1,
	// x2, y2(целые числа, лежащие в диапазоне 1Ц8).ѕроверить истинность вы -
	// сказывани€: Ђ—лон за один ход может перейти с одного пол€ на другоеї.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = abs(x2 - x1) == abs(y2 - y1);*/

	//ƒаны координаты двух различных полей шахматной доски x1, y1,
	//x2, y2(целые числа, лежащие в диапазоне 1Ц8).ѕроверить истинность вы -
	//сказывани€: Ђ‘ерзь за один ход может перейти с одного пол€ на другоеї.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = abs(x2 - x1) == abs(y2 - y1) || y1 == y2 || x1 == x2;
	cout << res << endl;*/


	//ƒаны координаты двух различных полей шахматной доски x1, y1,
	//x2, y2(целые числа, лежащие в диапазоне 1Ц8).ѕроверить истинность вы -
	//сказывани€: Ђ ороль за один ход может перейти с одного пол€ на другоеї.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1;
	cout << res << endl;*/


	///// 06.09.2023 /////

	/*
	if (condition)
	{
		oper;
	}
	else
	{
		oper;
	}
	*/

	/*int max;
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << a << endl;
	}
	else
	{
		if (b > c)
		{
			cout << b << endl;
		}
		else
		{
			cout << c << endl;
		}
	}

	max = (a > b && a > c) ? a : (b > c) ? b : c;

	
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;*/


	/*int a, b, re;
	char oper;
	bool flag = true;
	cin >> a >> oper >> b;*/

	/*if (oper == '+')
	{
		re = a + b;
	}
	else
	{
		if (oper == '-')
		{
			re = a - b;
		}
		else
		{
			if (oper == '*')
			{
				re = a * b;
			}
			else
			{
				if (oper == '/')
				{
					re = a / b;
				}
				else
				{
					flag = false;
					cout << "Ќе найдено" << oper << endl;
				}
			}
		}
	}
	if(flag)
		cout << re << endl;*/

	/*switch (oper)
	{
	case '+': re = a + b; break;
	case '-': re = a - b; break;
	case '*': re = a * b; break;
	case '/': re = a / b; break;
	case '%': re = a % b; break;
	default:
		flag = false;
		cout << "Ќе найдено" << oper << endl;
		break;
	}
	if (flag) 
		cout << re << endl;
	*/


	//int month;
	//cout << "Enter moon: ";
	//cin >> month;

	//switch (month)
	//{
	//	//«има
	//case 12: case 1:  case 2:  cout << "«има"; break;
	//	//¬есна
	//case 3:  case 4:  case 5:  cout << "¬есна"; break;
	//	//Ћ≥то
	//case 6:  case 7:  case 8:  cout << "Ћ≥то"; break;
	//	//ќс≥нь
	//case 9:  case 10: case 11: cout << "ќс≥нь"; break;
	//default:
	//	cout << "error";
	//	break;
	//}
	

	/*int m, n;
	cin >> n >> m;
	switch (n)
	{
	case SIX:   cout << "ш≥стка "; break;
	case SEVEN: cout << "с≥мка "; break;
	case EIGHT: cout << "в≥с≥мка "; break;
	case NINE:  cout << "дев'тка "; break;
	case TEN:   cout << "дес€тка "; break;
	case JACK:  cout << "валет "; break;
	case QWEEN: cout << "дама "; break;
	case KING:  cout << "король "; break;
	case ACE:   cout << "туз "; break;
	}

	switch (m)
	{
	case SUIT::SPADE :  cout << "п≥ки" << endl; break;
	case SUIT::CLUB:    cout << "трефи" << endl; break;
	case SUIT::DIAMOND: cout << "бубни" << endl; break;
	case SUIT::HEARH:   cout << "черви" << endl; break;
	}*/

	/*int n, n1, n2;
	cin >> n;
	n1 = n / 10;
	n2 = n % 10;

	switch (n)
	{
	case 11: cout << "одинадц€ть коп≥йок "; break;
	case 12: cout << "одинадц€ть коп≥йок "; break;
	case 13: cout << "одинадц€ть коп≥йок "; break;
	case 14: cout << "одинадц€ть коп≥йок "; break;
	case 15: cout << "одинадц€ть коп≥йок "; break;
	case 16: cout << "одинадц€ть коп≥йок "; break;
	case 17: cout << "одинадц€ть коп≥йок "; break;
	case 18: cout << "одинадц€ть коп≥йок "; break;
	case 19: cout << "одинадц€ть коп≥йок "; break;

	default:
		break;
	}

	switch (n1)
	{
	case 2: cout << "двадц€ть "; break;
	case 3: cout << "тридц€ть "; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "двадц€ть "; break;
	case 6: cout << "двадц€ть "; break;
	case 7: cout << "двадц€ть "; break;
	case 8: cout << "двадц€ть "; break;
	case 9: cout << "двадц€ть "; break;
	default:
		break;
	}

	switch (n2)
	{
	case 1: cout << "одна коп≥йка" << endl; break;
	case 2: cout << "дв≥ коп≥йки" << endl; break;
	case 3: cout << "три коп≥йки" << endl; break;
	case 4: cout << "чотири коп≥йки" << endl; break;
	case 5: cout << "п'ть коп≥йок" << endl; break;
	case 6: cout << "шсть коп≥йка" << endl; break;
	case 7: cout << "одна коп≥йка" << endl; break;
	case 8: cout << "одна коп≥йка" << endl; break;
	case 9: cout << "дев'€ть коп≥йка" << endl; break;
	}*/

	///// 07.09.2023  ///////


	/*
	
	while(condition)
	{
		oper;
	}
	
	*/
	

	/*
	 
	do
	{
		oper;
	} while (condition);
	
	*/
	
	
	/*for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}*/
	
	/*int a = 1;
	while (a <= 5)
	{
		cout << a << endl;
		a++;
	}

	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}

	int b = 1;
	do
	{
		cout << b << endl; 
		b++;
	} while (b <=5);*/
	
	
	/*int i;
	cin >> i;

	for (int a = 1; a <= 10; a++)
	{
		cout << a * i << " грн за " << a << " кг" << endl;
	}*/


	/*float k = 1.3;
	for (int i = 2; i <= 10; i+=2)
	{
		cout << 1 + i / 10. << " кг = " << k * (1 + i/10.) << endl;
	}*/


	/*char s;
	while (true)
	{
		cin >> s;
		
		if (s == '.')
		{
			break;
		}
		cout << (int)s << endl;
	}*/
	
	/*int n, s = 0;
	do
	{
		cin >> n;
		s += n;
	} while (n != 0);
	cout << s << endl;*/


	/*while (true)
	{
		cin >> n;
		s += n;
		if (n == 0)
		{
			cout << s;
			break;
		}
	}*/

	/*int n;
	cin >> n;
	int m = n, k = 0;
	while (m > 0)
	{
		k++;
		m /= 10;
	}
	for (int i = 0; i < 5-k; i++)
	{
		cout << 0;
	}
	cout << n << endl;*/


	/*int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}*/

	while (3)
	{

	}

	for ( ; ; )
	{

	}

}