#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	//qtdpeca=num de peças
	//valorunpeca= valor unitario das pecas
	int codpeca1,qtdpeca1,codpeca2,qtdpeca2;
	double valorunpeca1,valorunpeca2,total1,total2,total;
	scanf("%i %i %lf", &codpeca1, &qtdpeca1, &valorunpeca1);
	scanf("%i %i %lf", &codpeca2, &qtdpeca2, &valorunpeca2);
	total1 = qtdpeca1*valorunpeca1;
	total2 = qtdpeca2*valorunpeca2;
	total = total1 + total2;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	system("pause");
}
