#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	float N1, N2, N3, M;
	int F, MAT, AP=0, REP=0, RF=0, RM=0, i;
	for (i=1; i<=50; i++)
	{
		printf ("\n\nMatricula: ");
		scanf ("%d", &MAT);
		printf ("Apresente as 3 notas do aluno %d em Banco de dados:\n", MAT);
		scanf ("%f %f %f", &N1, &N2, &N3);
		M=(N1+N2+N3)/3;
		printf ("Numero de Faltas do aluno %d na diciplina Banco de dados: ", MAT);
		scanf ("%d", &F);
		if (F>12){
			printf ("Aluno %d reprovado por falta com Media: %.1f", MAT, M);
			RF++;			
		}
		else{
			if (M>=7){
				printf ("Aluno %d foi aprovado com media %.1f", MAT, M);
				AP++;
			}
			else{
				printf ("Aluno %d foi reprovado com media %.1f", MAT, M);
				RM++;
			}
		}
	}
	REP= RF+RM;
	printf ("\n\n\nTotal de aprovados: %d", AP);
	printf ("\nReprovados por falta: %d", RF);
	printf ("\nReprovados por media: %d", RM);
	printf ("\nTotal de reprovados: %d\n", REP);
	system ("pause");
	return(0);
}
