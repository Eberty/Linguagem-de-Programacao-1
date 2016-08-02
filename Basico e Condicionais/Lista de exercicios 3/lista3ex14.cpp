#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	char MUN[15];
	int ELE, VOT;
	printf ("Insira o nome do municipio: ");
	fflush (stdin);
	scanf ("%s", MUN);
	printf ("Informe o numero total de eleitores aptos a votar nessa eleiçao: ");
	scanf ("%d", &ELE);
	printf ("Quantos votos recebeu o candidato a prefeito mais votado? ");
	scanf ("%d", &VOT);
	if (ELE<=20000)
		printf ("Os municipios com menos de 20000 eleitores nao possuem segundo turno para prefeiro, estando eleito o candidato mais votado\n");
	else
		if ( VOT < (ELE/2))
			printf ("O municipio %s tera segundo turno", MUN);
		else
			printf ("O municipio %s teve seu prefeito eleito ainda no primeiro turno por mais de 50% dos votos", MUN);
	system ("pause");
	return (0);
}
