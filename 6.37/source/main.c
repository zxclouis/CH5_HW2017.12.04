#include<stdio.h>
#include<stdlib.h>
#pragma warning( disable : 4996 )
int number[];
int size;
int recursivemaximum(int number[], int size);

int main(void)
{
	int i;
	int a;
	int s[100];
	printf("块碭计(程:100):");
	scanf_s("%d", &a);
	printf("块计ゑ:\n");

	for (i = 0; i<a; i++)
	{
		printf("(%d).   ", i + 1);
		scanf("%d", &s[i]);
		printf("\n");
	}

	printf("程计琌%d\n\n", recursivemaximum(s, i));

	system("pause");
	return 0;
}

int recursivemaximum(int number[], int size)
{
	int max;
	if (size == 1)
	{
		return number[0];
	}
	else
	{
		max = recursivemaximum(number, size - 1);

		if (number[size] > max)
		{
			return number[size];
		}
		else
		{
			return max;
		}
	}
}