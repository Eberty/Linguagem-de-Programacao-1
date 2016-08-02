#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color f0");
	float N1, N2;
	printf ("Apresente N1 e N2: \n");
	scanf ("%f %f", &N1, &N2);
	printf ("Soma: %f \nProduto: %f \nQuociente: %f\n", N1+N2, N1*N2, N1/N2);
	system("pause");
	return(0);
}
