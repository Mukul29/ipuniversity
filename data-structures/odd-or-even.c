//Write a program to display odd and even numbers from an array of elements entered by the user using pointers.
#include <stdio.h>
#include <stdlib.h>

#define LEN 5
void displayArray(int array[], int size); //this function will display the arrays

int main()
{
	int arr[LEN], odd[LEN], even[LEN], countOdd = 0, countEven = 0, i, j, k; 
	//3 arrays for array, odd and even numbers.
	//2 flag and counter variables for odd and even.
	
	printf("Enter %d elements: ", LEN);
	for(i = 0; i < LEN; i++)
		scanf("%d", &arr[i]);
	printf("The entered array is: ");
	displayArray(arr, LEN);
	for(i = 0, j = 0, k = 0; i < LEN; i++) {
		if((arr[i]%2) != 0) {
			odd[j] = arr[i];
			countOdd++;
			j++;
		}
		else {
			even[k] = arr[i];
			countEven++;
			k++;
		}
	}

	if(!countOdd)
		printf("No odd numbers found.\n");
	else {
		printf("Odd number(s) are: ");
		displayArray(odd, countOdd);
	}

	if(!countEven)
		printf("No even numbers found.\n");
	else {
		printf("Even number(s) are: ");
		displayArray(even, countEven);
	}
	return 0;
}

void displayArray(int array[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}
