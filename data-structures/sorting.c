Q. Write a program to perform sorting using different sorting algorithms.

#include <stdio.h>

void accept(int arr[], int s);
void display(int arr[], int s);
void isort(int arr[], int s);
void ssort(int arr[], int s);
void bsort(int arr[],int s);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
	int arr[20],n,choice;
	printf("Enter size of array(<=20): ");
	scanf("%d", &n);
	printf("\nMENU");
	printf("\n1. Accept elements of array");
	printf("\n2. Display elements of array");
	printf("\n3. Sort the array using insertion sort method");
	printf("\n4. Sort the array using selection sort method");
	printf("\n5. Sort the array using bubble sort method");
	printf("\n6. Sort the array using quick sort method");
	printf("\n7. Exit\n\n");

	do
	{
		printf("Enter your choice 1-7: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:	accept(arr,n);
				break;
			case 2:	display(arr,n);
				break;
			case 3:	isort(arr,n);
				break;
			case 4:	ssort(arr,n);
				break;
			case 5:	bsort(arr,n);
				break;
			case 6:	quickSort(arr,0,n-1);
				break;
			case 7:	break;
			default:printf("\ninvalid choice.\n");
		}
	}while(choice!=7);

	return 0;
}

void accept(int arr[], int s)
{
	int i;
	printf("Enter %d elements\n", s);
	for(i=0;i<s;i++)
	{
		scanf("%d", &arr[i]);
	}
}

void display(int arr[], int s)
{
	printf("The elements of the array are: ");
	int i;
	for(i=0;i<s;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void isort(int arr[], int s)
{
	int i,j,temp;
	for(i=1;i<s;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("Array is now sorted!\n");
}

void ssort(int arr[], int s)
{
	int i,j,temp,small;
	for(i=0;i<s-1;i++)
	{
		small=i;
		for(j=i+1;j<s;j++) 	//finding the smallest element
		if(arr[j]<arr[small])
			small=j;
		if(small!=i)
		{
			swap(&arr[i],&arr[small]);
		}
	}
	printf("Array is now sorted!\n");
}

void bsort(int arr[],int s)
{
	int i,j,temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<(s-1-i);j++)
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
	}
	printf("Array is now sorted!\n");
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
