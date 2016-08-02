#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system ("color 0f");
	float A, B, C, X1, X2, DELTA;
	printf ("Apresente os valores de A,B,C -respectivamente- para a equacao quadratica (ax2 + b + c):\n");
	scanf ("%f %f %f", &A, &B, &C);
	if (A==0)
		printf ("A variavel A deve ser diferente de zero\n");
	else
	{
		DELTA = pow(B,2) - (4*A*C);
		if  (DELTA<0)
			printf ("Imposivel calcular: DELTA menor que zero, raiz comlexa\n");
		else
		{
			X1 = (-B + sqrt(DELTA))/(2*A);
			X2 = (-B - sqrt(DELTA))/(2*A);
			printf ("As raizes para a equacao sao: %.1f e %.1f \n", X1, X2);
		}
	}
	system ("pause");
	return (0);
}
