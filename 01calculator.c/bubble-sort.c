#include <stdio.h>


/*Function to swap two elements*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/*Function to implement Bubble Sort algorithm*/
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++) {
		// The last i elements are already in place
		for (j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

/*Function to print an array*/
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[] = {20, 10, 16, 3, 4, 35};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Unsorted array: \n");

	printArray( arr, n);

	bubbleSort(arr, n);

	printf("Sorted array in ascending order: \n");
	printArray(arr, n);
	return 0;
}
