#include "InsertionSort.h"
#include<iostream>
using namespace std;

InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}
void InsertionSort::main_insertion_sort(int arr[], int size)
{
	int key;
	for (int index = 1; index <size; index++)
	{
		key = arr[index];
		int newIndex = index - 1;
		while (newIndex >= 0 && arr[newIndex] > key)
		{
			arr[newIndex + 1] = arr[newIndex];
			newIndex = newIndex - 1;
			for (int index = 0; index < size; index++)
			{
				cout << arr[index] << " ";
			}
			cout << endl;
		}
		arr[newIndex + 1] = key;
	}
}
