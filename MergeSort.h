#pragma once
class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void main_merge_sort(int arr[], int size);
	void main_merge(int arr[], int leftLow, int leftHigh, int rightLow, int rightHigh);
	void merge_sort(int arr[], int low, int high);
};

