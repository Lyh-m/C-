#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Print(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}printf("\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int arr[5] = {0};
	for (int i=0; i < 5;i++)
	{
		arr[i] = rand() % 100;
	}
	Print(arr, 5);
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	Print(arr, 5);
	return 0;
}
