#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}


void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

template<class T>
void printArray(const T* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void setArray(T* arr, int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void setArray(float* arr, int size, int n = 1)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (int)((rand() % 10 / 0.69854877) * pow(10, n)) / pow(10, n);
	}
}

template<class T>
int linerSearch(const T* arr, int size, const T& key)
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
void reverseArray(T* arr, int size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
}

template<class T>
T maxValueArray(T* arr, int size)
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

template<class T>
T minValueArray(T* arr, int size)
{
	T min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

template<class T>
bool ascending(const T& a, const T& b)
{
	return a > b;
}


template<class T>
bool descending(const T& a, const T& b)
{
	return a < b;
}


bool lastNumber(const int& a, const int& b)
{
	if (a % 10 > b % 10)
		return true;
	if (a % 10 == b % 10)
		return ascending(a, b);
	return false;
}

template<class T>
void bubbleSort(T* arr, int size, bool(*method)(T, T) = ascending)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

template<class T>
void selectionSort(T* arr, int size)
{
	for (size_t current = 0; current < size - 1; current++)
	{
		int imin = current;
		for (size_t j = current + 1; j < size; j++)
		{
			if (arr[j] < arr[imin])
			{
				imin = j;
			}
		}
		if (current != imin)
			swap(arr[current], arr[imin]);
	}
}


template<class T>
void insertionSort(T* arr, int size)
{
	int current, k;
	for (size_t i = 1; i < size; i++)
	{
		current = arr[i];
		k = i - 1;
		while (k >= 0 && arr[k] > current)
		{
			arr[k + 1] = arr[k];
			k--;
		}
		arr[k + 1] = current;
	}
}


template<class T>
void createArr(T*& arr, int size)
{
	if (size < 0)
		return;
	if (arr != nullptr)
		delete[] arr;
	arr = new T[size];
}


template<class T>
void addElemArray(T*& arr, int& size, const T& value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;
	arr = temp;
	size++;
}


template<class T>
void delElemArray(T*& arr, int& size)
{
	T* temp = new T[size - 1];

	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}

	delete[] arr;

	size--;

	arr = temp;

}

template<class T>
void addElemArrayPos(T*& arr, int& size, T value, int pos)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = value;

	for (size_t i = pos; i < size; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;

	size++;

	arr = temp;
}

template<class T>
void createArray2D(T**& arr, int row, int col)
{
	arr = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		//arr[i] = new int[col];
		createArr(arr[i], col);
	}
}


template<class T>
T** createArray2D(int row, int col)
{
	T** arr = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	return arr;
}


template<class T>
void deleteArray2D(T**& arr, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

//Функція заповнення масиву випадковими значенями
template<class T>
void setArray2D(T** arr, int row, int col, int min = 0, int max = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}



template<class T>
void printArray2D(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << setw(3) << arr[i][j];
		}
		cout << endl;
	}
}

template<class T>
void addRowArray2D(T**& arr, int& row, int col, T* b = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}
	temp[row] = new T[col]{ 0 };
	if (b != nullptr)
	{
		for (size_t i = 0; i < col; i++)
		{
			temp[row][i] = b[i];
		}
	}
	delete[] arr;
	row++;
	arr = temp;
}

template<class T>
void delRowArray2D(T**& arr, int& row)
{
	T** temp = new T * [row - 1];
	for (size_t i = 0; i < row - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[row - 1];
	delete[] arr;
	row--;
	arr = temp;
}


template<class T>
void delRowPosArray2D(T**& arr, int& row, int pos)
{
	T** temp = new T * [row - 1];
	for (size_t i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	for (size_t i = pos + 1; i < row; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete[] arr[pos];
	delete[] arr;
	row--;
	arr = temp;
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
		strncat_s(res, len + 1, temp, p - temp);
		temp = p + strlen(old);
		p = strstr(temp, old);
	}

	strcat_s(res, len + 1, temp);
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


void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;

	cout << a << endl;
	cout << b << endl;
}



void printArray(const int* arr)
{
	int size = _msize((void*)arr) / sizeof(int);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int*** ArrToArr2D(int* a, int size)
{
	int k = 0;
	for (size_t i = 2; i < size; i++)
	{
		if (size % i == 0)
			k++;
	}

	int*** p = new int** [k];
	k = 0;
	for (size_t i = 2; i < size; i++)
	{
		if (size % i == 0)
		{
			int row = i;
			int col = size / i;
			p[k] = createArray2D<int>(row, col);
			for (size_t m = 0; m < size; m++)
			{
				p[k][m / col][m % col] = a[m];
			}
			k++;
		}
	}
	return p;
}

void printArr3D(int*** p)
{
	int k = _msize(p) / sizeof(int**);
	for (size_t i = 0; i < k; i++)
	{
		int row = _msize(p[i]) / sizeof(int*);
		int col = _msize(p[i][0]) / sizeof(int);
		printArray2D(p[i], row, col);
		cout << endl;
	}
}