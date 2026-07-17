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
	int n = 0;
	srand((unsigned int)time(NULL));
	printf("请定义数组的大小：");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);
	for (int i=0; i < n;i++)
	{
		arr[i] = rand() % 100;
	}
	printf("排序前顺序：");
	Print(arr, n);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("排序后顺序：");
	Print(arr, n);
	free(arr);
	return 0;
}
