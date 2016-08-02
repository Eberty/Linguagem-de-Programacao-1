#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char LIVRO[40], USUARIO;
	printf ("Nome do livro a ser emprestado: ");
	fflush (stdin);
	fgets (LIVRO, 40, stdin);
	printf ("Informe o tipo de usuário (P - Professor ou A - Aluno): ");
	scanf ("%c", &USUARIO);
	if (USUARIO!='p' && USUARIO!='P' && USUARIO!='a' && USUARIO!='A')
		printf ("Usuario Invalido");
	else
		if (USUARIO=='p' || USUARIO=='P')
		{
			printf ("(a) Nome do livro: %s",LIVRO);
            printf ("(b) Tipo de usuário: %c\n", USUARIO);
            printf ("(c) Total de Dias: 10\n");
		}
		else 
		{
			printf ("(a) Nome do livro: %s",LIVRO);
            printf ("(b) Tipo de usuário: %c\n", USUARIO);
            printf ("(c) Total de Dias: 3\n");
		}
	system ("pause");
	return (0);
}
