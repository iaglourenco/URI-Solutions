#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	double salfix, vendas,total;
	char nome[100];
	scanf("%s", nome);
	scanf("%lf", &salfix);
	scanf("%lf", &vendas);
	total = salfix + vendas * 0.15;
	printf("TOTAL = R$ %.2lf\n", total);
	system("pause");
}
