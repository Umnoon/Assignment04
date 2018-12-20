#include<iostream>
#include"SelectionSort.h"
#include"BubbleSort.h"
#include"MergeSort.h"
#include"InsertionSort.h"

using namespace std;

int main()
{
	int arr1[] = { 14, 33, 27, 10, 35, 19, 48, 44 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Given array is: " << endl;
	for (int index = 0; index < size1; index++)
	{
		cout << arr1[index] << " ";
	}
	cout << endl << endl;
	cout <<endl<< "Selection sort: " << endl;

	SelectionSort s;
	s.main_selection_sort(arr1, size1);

	int arr2[] = { 14, 33, 27, 10, 35, 19, 48, 44 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << endl << "Bubble Sort: " << endl;
	BubbleSort b;
	b.main_bubble_sort(arr2, size2);

	int arr3[] = { 14, 33, 27, 10, 35, 19, 48, 44 };
	int size3 = sizeof(arr3) / sizeof(arr3[0]);
	cout << endl << "Merge Sort: " << endl;
	MergeSort m;
	m.main_merge_sort(arr3, size3);

	int arr4[] = { 14, 33, 27, 10, 35, 19, 48, 44 };
	int size4 = sizeof(arr4) / sizeof(arr4[0]);
	cout << endl << "Insertion Sort: " << endl;
	InsertionSort i;
	i.main_insertion_sort(arr4, size4);



	return 0;

}
