#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int arr[])
{
	int i = 0;
	printf("≥ı ºªØ");
	for (i; i <= 9; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[])
{
	printf("\n");
	printf("ƒÊ÷√");
	int left = 0;
	int right = 9;
	for (int i = 0; i < 10; i++)
	{
		while (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		printf("%d ", arr[i]);
	}
}
void empty(int arr[])
{
	printf("\n");
	int i = 0;
	printf("«Âø’");
	for (i; i <= 9; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	reverse(arr);
	init(arr);
	empty(arr);
	system("pause");
	return 0;
}