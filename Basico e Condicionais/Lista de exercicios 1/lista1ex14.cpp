#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system ("color f0");
	int A, B, C;
	printf ("Apresente os valores de de A e B: \n\n");
	scanf ("%d %d", &A, &B);
	C=pow((A-B),2);
	printf ("O valor do quadrado da diferenca de A por B eh: %d \n", C);
	system ("pause");
	return (0);
}
