#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char NOME[40], SEXO;
	int TEMPO, TM=0, TPate10F=0, TPate10M=0, TP10F=0, TP10M=0, i;
	for (i=1; i<=80; i++){
		printf ("\nNome do professor: ");
		fflush (stdin);
		fgets (NOME,40,stdin);
		printf ("Tempo de profissao em anos: ");
		scanf ("%d", &TEMPO);
		TM+=TEMPO;
		printf ("Sexo(f/m): ");
		fflush (stdin);
		SEXO=getchar();
		if (SEXO!='M' && SEXO!='m' && SEXO!='F' && SEXO!='f')
			printf ("Sexo Invalido\n");
		else
			if (SEXO=='M' || SEXO=='m')
				if (TEMPO<=10)
					TPate10M++;
				else
					TP10M++;
			else
				if (TEMPO<=10)
					TPate10F++;
				else
					TP10F++;
	}
	printf ("\n\nTempo medio de profissao(em anos) de todos os professores: %d", TM/80);
	printf ("\nTotal de professoras mulheres com ate 10 anos de servico: %d", TPate10F);
	printf ("\nTotal de professores homens com ate 10 anos de servico: %d", TPate10M);
	printf ("\nTotal de professoras mulheres com mais de 10 anos de servico: %d", TP10F);
	printf ("\nTotal de professores homens com mais de 10 anos de servico: %d\n\n", TP10M);
    system ("pause");
    return(0);
}
