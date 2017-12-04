#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a,i;
	int b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0, m = 0;
	int range1;
	int range2;
	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		
		range1 = (rand() % 6) + 1;
		range2 = (rand() % 6) + 1;
		a = range1 + range2;
		if (a == 2)
		{
			b++;
		}
		if (a == 3)
		{
			c++;
		}
		if (a == 4)
		{
			d++;
		}
		if (a == 5)
		{
			e++;
		}
		if (a == 6)
		{
			f++;
		}
		if (a == 7)
		{
			g++;
		}
		if (a == 8)
		{
			h++;
		}
		if (a == 9)
		{
			j++;
		}
		if (a == 10)
		{
			k++;
		}
		if (a == 11)
		{
			l++;
		}
		if (a == 12)
		{
			m++;
		}
	}
	printf("總共次數:\n");
	printf("骰子的點數 [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]  [10]  [11]  [12]\n\n");
	printf("	   %d %d  %d %d %d %d %d %d %d  %d  %d\n\n", b, c, d, e, f, g, h, j, k, l, m);
	system("pause");
	return 0;
}