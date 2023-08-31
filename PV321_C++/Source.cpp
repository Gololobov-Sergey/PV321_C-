#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;
	cout << "Мене \"звати\" Сергій" << endl;
	cout << 4545 << " \\Hello\\" << endl;

	// bool        - 1b

	// char        - 1b

	// short       - 2b
	// int         - 4b (p)
	// long        - 4b
	// long long   - 8b

	// float       - 4b
	// double      - 8b
	// long double - 10b

	int year = 2023.9999;
	cout << year << endl;

}