/*
 * Quick Sort is a divide and conquer algorithm.
 * It works by selecting a 'pivot' element from the array and partitio
 * ning the other elements into two sub-arrays according to whether they are less than or greater than pivot. The
 * sub-arrays are then sorted recursively.
 *
 * Pseudocode
 * QuickSort(arr, low, high):
 * if low < high:
 * 	pivot_index = Partition(arr, low, high)
 *	QuickSort(arr, low, pivot_index - 1)
 *	QuickSort(arr, pivot_index + 1, high)
 *
 *Partition(arr, low, high):
 	pivot = arr[high]
	i = low - 1
	for j = low to high - 1:
		if arr[j] <= pivot:
			i = i + 1
			Swap arr[i] with arr[j]
		Swap arr[i + 1] with arr[high]
		Return i + 1
*/
#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Partition Funtion
int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1); // Index of smaller element
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

// Function to implement Quick SOrt algorithm
void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

// Function to print an array
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: \n");
	printArray(arr, n);

	quickSort(arr, 0, n - 1);

	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
