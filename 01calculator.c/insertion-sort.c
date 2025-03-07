/*
 * Insertion Sort builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.
 *
 * Pseudocode
 *
 * InsertionSort(arr)
 * 	for i = 1 to length(arr) - 1:
 * 	key = arr[i]
 * 	j= i - 1
 * 	while j >= 0 and arr[j] > key:
 * 		arr{j + 1] = arr[j]
 * 		j = j - 1
 * 	arr[j + 1] = key
 */

#include <stdio.h>

// Function to implement Insertion Sort
void insertionSort(int arr[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;


		// Move elements of arr[0..i-1], that are greater than key, to one position ahead
		// of their current position
		while (j >= 0 && arr[j] > key)  {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: \n");
	printArray(arr, n);

	insertionSort(arr, n);

	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

			
