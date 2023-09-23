#pragma once
#include<iostream>
#include<iomanip>

using namespace std;

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
		arr[i] = (int)((rand() % 10 / 0.69854877) * pow(10, n)) /pow(10, n);
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
void bubbleSort(T* arr, int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
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
		for (size_t j = current+1; j < size; j++)
		{
			if (arr[j] < arr[imin]) 
			{
				imin = j;
			}
		}
		if(current != imin)
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