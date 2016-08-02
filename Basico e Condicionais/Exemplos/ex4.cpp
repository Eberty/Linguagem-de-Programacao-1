#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color 0f");
	char NOME[40];
	printf ("\n digite seu nome completo: ");
	fflush(stdin);
	fgets(NOME, 40, stdin);
	printf ("\n\n Seja bem vindo %s \n", NOME);
	printf ("\n\n A funcao fgets() aceita caracter em");
	printf ("\n branco no meio do string. Use fgets().\n\n");
	system("pause");
	return(0);
}
