#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char SEXO;
	printf ("Apresente o sexo (f/m):");
	fflush (stdin);
	scanf ("%c", &SEXO);
	if ((SEXO=='F') || (SEXO=='f'))
		printf ("Sexo Feminino\n");
	else
		if ((SEXO=='m') || (SEXO=='M'))
			printf ("Sexo Masculino\n");
		else
			printf ("Sexo Invalido\n");
	system ("pause");
	return (0);
}
