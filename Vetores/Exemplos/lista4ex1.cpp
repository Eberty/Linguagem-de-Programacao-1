#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int I;
	float SOMA=0, MEDTUR, MEDIA[8];
	printf ("\nDigite 8 medias: ");
	for (I=0; I<8; I++)
		{
			printf ("\nDigite a media %d: ", I+1);
			scanf ("%f", &MEDIA[I]);
			SOMA+=MEDIA[I];
		}
	MEDTUR=SOMA/8;
	printf ("\nMedia da turma = %.2f \n\n", MEDTUR);
	system ("pause");
	return (0);
}
