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
	cout << "���� ����� �����" << endl;
	cout << "���� \"�����\" �����" << endl;
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

	// ���� ����������� �����.� ��� ���������� ������ ����� ����� �
	// ��������� �� ������.������� ���������� �����.

	/*int a, a1, a2, a3, b;
	cin >> a;
	a3 = a % 10;
	a2 = a / 10 % 10;
	a1 = a / 100;
	b = a2 * 100 + a3 * 10 + a1;
	cout << b << endl;*/



	//���� ���������� ���� ��������� ����� ��������� ����� x1, y1,
	//x2, y2(����� �����, ������� � ��������� 1�8).��������� ���������� �� -
	//����������: ������ �� ���� ��� ����� ������� � ������ ���� �� ������.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = y1 == y2 || x1 == x2;*/


	// ���� ���������� ���� ��������� ����� ��������� ����� x1, y1,
	// x2, y2(����� �����, ������� � ��������� 1�8).��������� ���������� �� -
	// ����������: ����� �� ���� ��� ����� ������� � ������ ���� �� ������.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = abs(x2 - x1) == abs(y2 - y1);*/

	//���� ���������� ���� ��������� ����� ��������� ����� x1, y1,
	//x2, y2(����� �����, ������� � ��������� 1�8).��������� ���������� �� -
	//����������: ������ �� ���� ��� ����� ������� � ������ ���� �� ������.

	/*int x1, x2, y1, y2, res;
	cin >> x1 >> y1 >> x2 >> y2;
	res = abs(x2 - x1) == abs(y2 - y1) || y1 == y2 || x1 == x2;
	cout << res << endl;*/


	//���� ���������� ���� ��������� ����� ��������� ����� x1, y1,
	//x2, y2(����� �����, ������� � ��������� 1�8).��������� ���������� �� -
	//����������: ������� �� ���� ��� ����� ������� � ������ ���� �� ������.

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
	int max;
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

	max = (a > b) ? a : b;


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
					cout << "�� �������" << oper << endl;
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
		cout << "�� �������" << oper << endl;
		break;
	}
	if (flag) 
		cout << re << endl;*/


	//int month;
	//cout << "Enter moon: ";
	//cin >> month;

	//switch (month)
	//{
	//	//����
	//case 12: case 1:  case 2:  cout << "����"; break;
	//	//�����
	//case 3:  case 4:  case 5:  cout << "�����"; break;
	//	//˳��
	//case 6:  case 7:  case 8:  cout << "˳��"; break;
	//	//����
	//case 9:  case 10: case 11: cout << "����"; break;
	//default:
	//	cout << "error";
	//	break;
	//}
	

	/*int m, n;
	cin >> n >> m;
	switch (n)
	{
	case SIX:   cout << "������ "; break;
	case SEVEN: cout << "���� "; break;
	case EIGHT: cout << "����� "; break;
	case NINE:  cout << "���'��� "; break;
	case TEN:   cout << "������� "; break;
	case JACK:  cout << "����� "; break;
	case QWEEN: cout << "���� "; break;
	case KING:  cout << "������ "; break;
	case ACE:   cout << "��� "; break;
	}

	switch (m)
	{
	case SUIT::SPADE :  cout << "���" << endl; break;
	case SUIT::CLUB:    cout << "�����" << endl; break;
	case SUIT::DIAMOND: cout << "�����" << endl; break;
	case SUIT::HEARH:   cout << "�����" << endl; break;
	}*/

	/*int n, n1, n2;
	cin >> n;
	n1 = n / 10;
	n2 = n % 10;

	switch (n)
	{
	case 11: cout << "���������� ������ "; break;
	case 12: cout << "���������� ������ "; break;
	case 13: cout << "���������� ������ "; break;
	case 14: cout << "���������� ������ "; break;
	case 15: cout << "���������� ������ "; break;
	case 16: cout << "���������� ������ "; break;
	case 17: cout << "���������� ������ "; break;
	case 18: cout << "���������� ������ "; break;
	case 19: cout << "���������� ������ "; break;

	default:
		break;
	}

	switch (n1)
	{
	case 2: cout << "�������� "; break;
	case 3: cout << "�������� "; break;
	case 4: cout << "����� "; break;
	case 5: cout << "�������� "; break;
	case 6: cout << "�������� "; break;
	case 7: cout << "�������� "; break;
	case 8: cout << "�������� "; break;
	case 9: cout << "�������� "; break;
	default:
		break;
	}

	switch (n2)
	{
	case 1: cout << "���� ������" << endl; break;
	case 2: cout << "�� ������" << endl; break;
	case 3: cout << "��� ������" << endl; break;
	case 4: cout << "������ ������" << endl; break;
	case 5: cout << "�'�� ������" << endl; break;
	case 6: cout << "���� ������" << endl; break;
	case 7: cout << "���� ������" << endl; break;
	case 8: cout << "���� ������" << endl; break;
	case 9: cout << "���'��� ������" << endl; break;
	}*/
}