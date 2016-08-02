#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int C, D, U, NUM, INV;
	printf ("Informe um numero de 3 digitos: ");
	scanf ("%d", &NUM);	
	C=NUM/100;
	D=NUM%100;
	D=D/10;
	U=NUM%100;
	U=U%10;
	U=U*100;
	D=D*10;
	INV=D+C+U;
	printf ("O numero invertido eh: %d \n", INV);
	system("pause");
	return(0);
}
