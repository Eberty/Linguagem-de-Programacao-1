#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int OPCAO;
	printf ("******** FAST FOOD DO ZECA ********");
	printf ("\n\nMENU:\n");
	printf ("\nOPCAO 1:\n Big Super Sanduba (2 hamburgueres, queijo, batata frita e refrigerante) - R$ 8,50\nOPCAO 2:\n Quase Super Sanduba (1 hamburguer, batata frita e refrigerante) - R$ 6,00 \nOPCAO 3:\n Mirrandus Sanduba (1 misto quente e refrigerante) - R$ 4,00 \n ");
	printf ("Escolha sua opcao pelo numero: ");
	scanf ("%d", &OPCAO);
	switch (OPCAO)
	{
		case 1: printf ("\nVoce escolheu: \nOPCAO 1: Big Super Sanduba (2 hamburgueres, queijo, batata frita e refrigerante) - R$ 8,50\n"); break;
		case 2: printf ("\nVoce escolheu: \nOPCAO 2: Quase Super Sanduba (1 hamburguer, batata frita e refrigerante) - R$ 6,00\n"); break;
		case 3: printf ("\nVoce escolheu: \nOPCAO 3: Mirrandus Sanduba (1 misto quente e refrigerante) - R$ 4,00\n"); break;
		default: printf ("\nOpcao invalida\n"); break;
	}
	system ("pause");
	return (0);
}
