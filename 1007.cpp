#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b, c, d, dif;
	scanf("%i",&a);
	scanf("%i", &b);
	scanf("%i",&c);
	scanf("%i",&d);
	dif = (a*b - c*d);
	printf("DIFERENCA = %i\n", dif);
	system("pause");
}
