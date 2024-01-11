#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

int main()
{
	int i ;
	int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < 9; i++)
	{	
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 8; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	
	qsort(arr, n, sizeof(arr[0]), compare);

	for (i = 0; i < n; i++);
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
