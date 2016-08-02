#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int NUM, IDADE, IDT=0, TF=0, TM=0, T18=0, TEXF=0, TEXM=0, i;
	char NOME[40], SEXO, EX;
	for (i=1; i<=100; i++)
	{
		printf ("\nNumero do candidato: ");
		scanf ("%d", &NUM);
		printf ("Nome do candidato: ");
		fflush (stdin);
		fgets (NOME,40, stdin);
		printf ("Sexo do caidato (m/f): ");
		fflush (stdin);
		SEXO=getchar();
		if (SEXO!='M' && SEXO!='m' && SEXO!='F' && SEXO!='f')
			printf ("Sexo invalido");
		else
			if (SEXO=='M' || SEXO=='m')
				TM++;
			else
				TF++;
		printf ("Idade do candidato: ");
		scanf ("%d", &IDADE);
		if (IDADE>=18)
			T18++;
		IDT+=IDADE;
		printf ("Candidato possui experiencia?(s/n) ");
		fflush (stdin);
		EX=getchar();
		if (EX=='s' || SEXO=='S')
			if (SEXO=='M' || SEXO=='m')
				TEXM++;
			else
				if (SEXO=='F' || SEXO=='f')
					TEXF++;
	}
	printf ("\nIdade media dos candidatos: %d", IDT/100);
	printf ("\nTotal de candidatas mulheres: %d", TF);
	printf ("\nTotal de candidatos homens: %d", TM);
	printf ("\nTotal de candidatos maiores de idade: %d", T18);
	printf ("\nMulheres com experiencia: %d", TEXF);
	printf ("\nHomens com experiencia: %d\n", TEXM);
	system ("pause");
	return(0);
}
