#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int raio;
	double volume, pi;
	scanf("%i", &raio);
	pi = 3.14159;
	volume = (4.0 / 3.0)*pi*raio*raio*raio;
	printf("VOLUME = %.3lf\n", volume);
	system("pause");
}
