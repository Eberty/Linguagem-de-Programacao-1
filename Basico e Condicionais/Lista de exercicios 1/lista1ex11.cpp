#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float PRESTACAO, VALOR, TAXA, TEMPO;
	printf ("Apresente o valor normal da prestacao: ");
	scanf ("%f", &VALOR);
	printf ("Informe a taxa de juros em porcentagem: ");
	scanf ("%f", &TAXA);
	printf ("Tempo em ataso (meses): ");
	scanf ("%f", &TEMPO);
	PRESTACAO=VALOR + (VALOR*(TAXA/100)*TEMPO);
	printf ("O novo valor eh: %f \n", PRESTACAO);
	system("pause");
	return(0);
}
