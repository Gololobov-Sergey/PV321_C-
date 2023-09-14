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


// type name(param)
// {
// 	  body;
// }


void starLine(int count = 10, char sym = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << sym;
	}
	cout << endl;
}

template<class T1, class T2, class T3>
auto sum(T1 a, T2 b, T3 c) -> decltype(a+b)
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

template<class T>
void printArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T arr[], int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void setArray(float arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

template<class T>
int linerSearch(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key) 
		{
			return i;
		}
	}
	return -1;
}

template<class T>
void reverseArray(T arr[], int size)
{
	for (size_t i = 0; i < size/2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}

template<class T>
T maxValueArray(T arr[], int size)
{
	T max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);  // CP

	// type name[size];

	srand(time(0));

	auto b = 5;
	int a = 5;

	decltype(a + b) f;

	//starLine();
	//
	//starLine();
	//starLine(25);
	//starLine(40, '#');

	//int c = sum(3, 5);
	cout << sum(2.6, 5, 'c') << endl;

	//cout << avg3(3, 4, 6) << endl;


	/*int a = 5;
	a = inc(a);
	cout << a << endl;*/


	const int size = 5;
	int arr[size];
	setArray(arr, size);
	printArray(arr, size);
	//int k = linerSearch(arr, size, 5);
	//((k == -1)? cout << "Not found" << endl : cout << k << endl);
	reverseArray(arr, size);
	printArray(arr, size);
	cout << maxValueArray(arr, size) << endl;

	float arr2[5] = {2.3, 4.5, 3.5, 5.6, 3.1};
	setArray(arr2, size);
	cout << maxValueArray(arr2, size) << endl;

	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/


	////// sort  ////////

	/*for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	/*for (size_t i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}*/

	/*int count0 = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count0++;
		}
	}
	cout << "Count 0 = " << count0 << endl;*/

	/*int count1 = 0;
	for (size_t i = 0; arr[i] != 1; i++)
	{
		count1++;
	}
	cout << "Count 0 to first 1 = " << count1 << endl;*/

	/*int k = 0;
	for (size_t i = 1; i < size; i += 2)
	{
		if (arr[i] == 1)
		{
			k++;
		}
	}
	cout << k << endl;*/


	/*int max = arr[0], min = arr[0], imax = 0, imin = 0;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}

	int start = (imax > imin) ? imin : imax;
	int end = (imax > imin) ? imax : imin;

	int s = 0;
	for (size_t i = start+1; i < end; i++)
	{
		s += arr[i];
	}
	cout << s << endl;*/


	//int a = 5, b = 4;
	/*int t = a;
	a = b;
	b = t;*/
	//swap(a, b);

	/*int B[size];
	int c = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			B[c++] = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < c; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;*/



	// type name[row][col];

	//const int row = 4;
	//const int col = 3;
	//int arr[row][col]; // = { {1,2,3}, {4,5}, {6,7} };

	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % 10;
	//	}
	//}


	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	/*int maxSum = INT_MIN, iRow = 0;
	for (size_t i = 0; i < row; i++)
	{
		int sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			iRow = i;
		}
	}
	cout << "Row = " << iRow << endl;*/



	/*int minSum = INT_MAX, iCol = 0;
	for (size_t j = 0; j < col; j++)
	{
		int sum = 0;
		for (size_t i = 0; i < row; i++)
		{
			sum += arr[i][j];
		}
		if (sum < minSum)
		{
			minSum = sum;
			iCol = j;
		}
	}
	cout << "Col = " << iCol << endl;*/


	/*int sum[row];
	for (size_t i = 0; i < row; i++)
	{
		int s = 0;
		for (size_t j = 0; j < col; j++)
		{
			s += arr[i][j];
		}
		sum[i] = s;
	}

	for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 0; j < row - 1 - i; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				swap(sum[j], sum[j + 1]);
				for (size_t k = 0; k < col; k++)
				{
					swap(arr[j][k], arr[j+1][k]);
				}
			}
		}
	}
	cout << endl;

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/


	// DZ
	// шаблон сортування
	// 
	// конкретна реалізація для СЕТ
	// 
	// Написати функцію, що реалізує алгоритм бінарного пошуку 
	// заданого ключа в одновимірному масиві.
	
}