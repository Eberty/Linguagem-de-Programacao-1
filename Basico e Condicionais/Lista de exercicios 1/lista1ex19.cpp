#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char NOME[40];
	float VH, NA, INSS, SAL;
	printf ("Apresente nome do prof.: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	printf ("Valor da hora aula: ");
	scanf  ("%f", &VH);
	printf ("Numero de aulas dadas no mes: ");
	scanf ("%f", &NA);
	printf ("Percentual de desconto de inss: ");
	scanf ("%f", &INSS);
	SAL = VH * NA - ((INSS/100) * VH * NA);
	printf ("O salario liquido do prof. %s, eh: %f \n", NOME, SAL);
	system ("pause");
	return(0);
}
