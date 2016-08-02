#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char NOME[40];
	int IDADE, PROFISSAO;
	printf ("Insira seu nome: ");
	fflush (stdin);
	fgets (NOME, 40, stdin);
	printf ("Sua idade: ");
	scanf ("%d", &IDADE);
	printf ("Informe o total de anos de profissão como professor: ");
	scanf ("%d", &PROFISSAO);
	if (IDADE<18 || IDADE>70)
		printf ("Idade invalida\n");
	else
		if (PROFISSAO<=2)
			printf ("Professor novato\n");
		else
			if (PROFISSAO<=30)
				printf ("O professor %s eh experiente\n", NOME);
			else
				printf ("O professor %sja pode se aposentar\n", NOME);
	system ("pause");
	return (0);
}
