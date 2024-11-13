/*
 * Merge sort algorithm is a divide and conquer algorithm that divides
 * the array into halves, recursively sorts each half, and then merges the sorted halves.
 *
 * Pseudocode
 *
 * MergeSort(arr):
 * 	If length of arr > 1:
 * 		mid = length of arr / 2
 * 		left_half = arr[0:mid]
 * 		right_half = arr[mid: length(arr)]
 *
 * 		MergeSort(left_half)
 * 		MergeSort(right_half)
 *
 * 		i = j = k = 0
 *
 * 		while i < length of the left-half and j < length of right_half:
 *
 * 			If left_half[i] < right_half[j]:
 * 				arr[k] = left_half[i]
 * 				i += 1
 *			Else:
 *				arr[k] = right_half[j]
 *				j += 1
 *			k += 1
 *
 *		while i < length of left_half:
 *			arr[k] = left_half[i]
 *			i += 1
 *			k += 1
 *
 *		while j < length of right_half:
 *			arr[k] = right_half[j]
 *			j += 1
 *			k += 1
 */


/*
 * Merging two sorted lists A:[12, 25] and B:[8, 31]
 *
 * Merge(A, B):
 * 	result = []
 * 	i = j = 0
 *
 * 	while i < length(A) and j < length(B):
 * 		if A[i] < B[j]:
 * 			Append A[i] to the result
 * 			i += 1
 * 		Else:
 * 			Append B[j] to the result
 * 			j += 1
 * 	while i < length(A):
 * 		Append A[i] to result
 * 		i += 1
 *
 * 	while j < length(B):
 * 		Append B[j] to result
 * 		j += 1
 * 	Return result
 */


#include <stdio.h>
#include <stdlib.h>


// Function to merge two sorted subarrays
void merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;


	// Creating temporary arrays
	int L[n1], R[n2];

	//Copy data to temporary arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	// Merge the temporary arrays back into arr[left...right]
	i = 0;
	j = 0;
	k = left;
	while(i < n1 && j < n2) {
		if (L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Function to iimplement Merge Sort
void mergeSort(int arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		// Sort first and second halves
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		// Merge the dorted halves
		merge(arr, left, mid, right);
	}
}

// Function to print an array
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int A[] = {12, 25};
	int B[] = {8, 31};
	int nA = sizeof(A) / sizeof(A[0]);
	int nB = sizeof(B) / sizeof(B[0]);
	int C[nA + nB];

	// Copy elements of A and B into C
	for (int i = 0; i < nA; i++)
		C[i] = A[i];
	for (int i = 0; i < nB; i++)
		C[nA + 1] = B[i];

	int nC = nA + nB;

	printf("Unsorted merged array: \n");
	printArray(C, nC);

	// Perform Merge Sort
	mergeSort(C, 0, nC - 1);

	printf("Sorted merged array: \n");
	printArray(C, nC);


	return 0;
}


