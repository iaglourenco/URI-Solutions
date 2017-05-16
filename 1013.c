#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b,c;
	scanf("%i %i %i", &a,&b,&c);
	if (a > b)
	if (a > c)
		printf("%d eh o maior\n", a);
	if (b > a)
	if (b > c)
		printf("%d eh o maior\n", b);
	if (c>a)
	if (c>b)
		printf("%d eh o maior\n", c);
	system("pause");
}
