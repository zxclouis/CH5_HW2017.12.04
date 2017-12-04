#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;
void stringreverse(void);
char s[] = "How to do the homework??";
int main(void)
{
	i = sizeof(s)-2;
	printf("原本的字串:%s\n\n", s);
	printf("後來的字串:");
	stringreverse();
	printf("\n");
	system("pause");
	return 0;
}
void stringreverse(void)
{
	printf("%c", s[i]);
	if (i != 0)
	{
		i--;
		stringreverse();
	}
}