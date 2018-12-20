#include "SelectionSort.h"
#include<iostream>
using namespace std;


SelectionSort::SelectionSort()
{
}


SelectionSort::~SelectionSort()
{
}
void SelectionSort::main_swap(int *first, int *lowest)
{
	int temp;
	temp = *first;
	*first = *lowest;
	*lowest = temp;
}
void SelectionSort::main_selection_sort(int arr[], int size)
{
	int minimumIndex;
	for (int index = 0; index < size-1; index++)
	{
		minimumIndex = index;
		for (int next = index + 1; next < size; next++)
		{
			if (arr[next] < arr[minimumIndex])
				minimumIndex = next;
			main_swap(&arr[minimumIndex], &arr[index]);
		}
		for (int index = 0; index < size; index++)
		{
			cout << arr[index] << " ";
		}
		cout << endl;
	}

}
