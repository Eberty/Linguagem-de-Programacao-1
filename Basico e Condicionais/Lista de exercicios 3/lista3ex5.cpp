#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float N1, N2, N3, N4, MED;
	printf ("Apresente as notas do aluno: \n");
	scanf ("%f %f %f %f", &N1, &N2, &N3, &N4);
	MED = (N1 + N2 + N3 + N4) / 4;
	if (MED >= 7)
		printf ("Aluno aprovado com media %.1f ", MED);
	else
		printf ("Para ser aprovado e nsessesario o minimo de 7 pontos \nAluno reprovado com media %.1f \n", MED);
	system ("pause");
	return (0);
}
