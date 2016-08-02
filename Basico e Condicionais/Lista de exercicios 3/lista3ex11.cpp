#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char NOME[40], SEXO;
	float N1, N2, MED;
	printf ("Insira o nome do aluno: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	printf ("Insira o sexo (f/m): ");
	scanf ("%c", &SEXO);
	if (SEXO!='F' && SEXO!='f' && SEXO!='m' && SEXO!='M')
		printf ("Sexo invalido\n");
	printf ("Informe as notas do aluno %s", NOME);
	scanf ("%f %f", &N1, &N2);
	MED=(N1+N2)/2;
	if (MED<5)
		printf ("Aluno reprovado com media %.2f", MED);
	else
		if (MED<=8)
			printf ("Aluno regular na diciplina com media %.2f", MED);
		else
			printf ("O aluno obteve um exelente desempenho na diciplina com media %.2f", MED);
	system ("pause");
	return(0);
}
