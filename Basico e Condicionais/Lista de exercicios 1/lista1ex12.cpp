#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	float REAL, DOLAR, COTACAO;
	printf ("Cotacao do dolar: ");
	scanf ("%f", &COTACAO);
	printf ("Quantidade de rais: ");
	scanf ("%f", &REAL);
	DOLAR=REAL*COTACAO;
	printf ("O valor em Dolares eh: %f \n", DOLAR);
	system("pause");
	return (0);
}
