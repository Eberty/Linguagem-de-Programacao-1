#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color Ef");
	int N1, N2, SOMA;
	printf ("\n Digite um numero inteiro ");
	scanf ("%d", &N1);
	printf ("\n Digite um numero inteiro ");
	scanf ("%d", &N2);
	SOMA=N1+N2;
	printf("\n A soma eh %d \n\n", SOMA);
	system("pause");
	return(0);
}
