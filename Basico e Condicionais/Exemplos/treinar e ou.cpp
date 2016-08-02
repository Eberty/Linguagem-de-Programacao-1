#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float A,B,C;
	printf ("Apresente os lados de um triangulo: \n");
	scanf ("%f %f %f", &A, &B, &C);
	if (( A < B + C ) && ( B < A + C ) && ( C < A + B ))
		if (A == B && B == C)
			printf ("Triangulo equilatero \n");
		else
			if ((A != B) && (A != C) && (B != C))
				printf ("Triangulo escaleno \n");
			else
				printf ("Tianulo isoceles \n");
	else
		printf ("Esses lados nao formam um triangulo \n");
	system ("pause");
	return (0);
}
