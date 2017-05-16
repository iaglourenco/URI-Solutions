#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void main()
{
	int a, b, x;
	//printf("\nDigite o primeiro valor:\n");
	scanf("%i", &a);
	//printf("\nDigite o segundo valor:\n");
	scanf("%i", &b);
	x = a + b;
	printf("X = %i\n", x);
	system("pause");
}
