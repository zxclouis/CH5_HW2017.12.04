#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
#pragma warning( disable : 4996 )
size_t binarysearch(const int b[], int searchkey, size_t low, size_t high);
void printheader(void);
void printrow(const int b[], size_t low, size_t mid, size_t high);
int main(void)
{
	int a[SIZE];
	size_t i;
	int key;
	size_t result;
	for (i = 0; i < SIZE; ++i)
	{
		a[i] = 2 * i;
	}

	printf("%s","Enter a number between 0 and 28: ");
	scanf("%d", &key);

	printheader();


	result = binarysearch(a, key, 0, SIZE - 1);

	if (result != -1)
	{
		printf("\n%d found in array element %d\n", key, result);
	}
	else
	{
		printf("\n%d not found\n", key);
	}
		system("pause");
}
size_t binarysearch(const int b[], int searchkey, size_t low, size_t high)
{
	int middle;
	if (low <= high)
	{
		middle = (low + high) / 2;
		printrow(b, low, middle, high);
		if (searchkey == b[middle])
		{
			return middle;
		}
		else if (searchkey < b[middle])
		{
			high = middle - 1;
			middle = binarysearch(b, searchkey, low, high);
			return middle;
		}
		else
		{
			low = middle + 1;
			middle = binarysearch(b, searchkey, low, high);
			return middle;
		}
	}

	return -1;

}
void printheader(void)
{
	unsigned int i;
	puts("\nSubscripts:");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%3u ", i);
	}
	puts("");
	for (i = 1; i <= 4*SIZE; ++i)
	{
		printf("%s", "-");
	}
	puts("");
}
void printrow(const int b[], size_t low, size_t mid, size_t high)
{
	size_t i;
	for (i = 0; i < SIZE; ++i)
	{
		if (i<low || i>high)
		{
			printf("%s", "    ");
		}
		else if (i == mid)
		{
			printf("%3d*", b[i]);
		}
		else
		{
			printf("%3d ", b[i]);
		}
	}
	puts("");
}