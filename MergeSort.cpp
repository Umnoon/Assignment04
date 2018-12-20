#include "MergeSort.h"
#include<iostream>
using namespace std;

MergeSort::MergeSort()
{
}


MergeSort::~MergeSort()
{
}
void MergeSort::main_merge_sort(int arr[], int size) {
	merge_sort(arr, 0, size - 1);
}

void MergeSort::main_merge(int arr[], int leftLow, int leftHigh, int rightLow, int rightHigh)
{
	int size = rightHigh - leftLow + 1;
	int *temp = new int[size];
	int left = leftLow;
	int right = rightLow;
	for (int index = 0; index < size; index++) {
		if (left > leftHigh)
			temp[index] = arr[right++];
		else if (right > rightHigh)
			temp[index] = arr[left++];
		else if (arr[left] <= arr[right])
			temp[index] = arr[left++];
		else
			temp[index] = arr[right++];
	}

	for (int index = 0; index < size; index++)
	{
		arr[leftLow++] = temp[index];
	}
	delete[] temp;
	for (int index = 0; index < size; index++)
	{
		cout << arr[index] << " ";
	}
	cout << endl;
}

void MergeSort::merge_sort(int arr[], int low, int high)
{
	if (low >= high)
		return;
	else {
		int mid = (low + high) / 2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		main_merge(arr, low, mid, mid + 1, high);
	}
}
