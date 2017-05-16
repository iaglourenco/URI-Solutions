#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int numfuncionario, htrabalhada;
	float hcusto,salario;
	scanf("%i", &numfuncionario);
	scanf("%i",&htrabalhada);
	scanf("%f", &hcusto);
	salario = htrabalhada*hcusto;
	printf("NUMBER = %i\n", numfuncionario);
	printf("SALARY = U$ %.2f\n", salario);
	system("pause");
}
