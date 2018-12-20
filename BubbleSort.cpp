#include "BubbleSort.h"
#include<iostream>
using namespace std;


BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

void BubbleSort::main_bubble_sort(int arr[], int size)
{
	bool swapped = true;
	int count = 0;
	int temp;
	while (swapped)
	{
		swapped = false;
		count++;
		for (int index = 0; index < size - count; ++index)
		{
			if (arr[index] > arr[index + 1])
				{
					temp = arr[index];
					arr[index] = arr[index + 1];
					arr[index + 1] = temp;
					for (int index = 0; index < size; index++)
					{
						cout << arr[index] << " ";
					}
					swapped = true;
					cout << endl;
				}
			
		}
	}

}
