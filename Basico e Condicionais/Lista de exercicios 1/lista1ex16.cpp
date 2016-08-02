#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system("color f0");
	char NOME[40];
	float PESO, ALTURA, IMCH, IMCM, MEDIA;
	printf ("Apresente nome do homem: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	printf ("Apresnte peso e altura: \n");
	scanf ("%f %f", &PESO, &ALTURA);
	IMCH = PESO / pow(ALTURA, 2);
	printf ("IMC do %s: %f \n", NOME, IMCH);
	printf ("Apresente nome da mulher: ");
	fflush(stdin);
	fgets (NOME, 40, stdin);
	printf ("Apresnte peso e altura: \n");
	scanf ("%f %f", &PESO, &ALTURA);
	IMCM = PESO / pow(ALTURA, 2);
	printf ("IMC da %s: %f \n", NOME, IMCM);
	MEDIA = (IMCH*.6) + (IMCM*.4);
	printf ("A média ponderada eh: %f \n", MEDIA);
	system("pause");
	return(0);
}
