#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	double a, b, mediafinal;
	scanf("%lf", &a);
	scanf("%lf", &b);
	mediafinal = ((a*3.5) + (b*7.5))/11;
	printf("MEDIA = %.5lf\n", mediafinal);
	system("pause");
}
