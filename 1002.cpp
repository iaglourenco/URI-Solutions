#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	double raio, area, pi;
	//printf("Digite o valor do raio");
	scanf("%lf", &raio);
	pi = 3.14159;
	area = pi * (raio*raio);
	printf("A=%.4lf\n",area);
	system("pause");
}
