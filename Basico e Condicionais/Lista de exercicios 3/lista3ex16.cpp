#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float KM, X;
	char CARRO;
	printf ("Qual a quantidade de kilometros a serem percorridos? ");
	scanf ("%f", &KM);
	printf ("Informe seu tipo de carro (A,B ou C): ");
	fflush (stdin);
	CARRO= getchar();
	if (CARRO!='a' && CARRO!='A' && CARRO!='b' && CARRO!='B' && CARRO!='C' && CARRO!='c')
		printf ("Carro invalido\n");
	else
	{
		if (CARRO=='a' || CARRO=='A')
			X=KM/12;
		else
			if (CARRO=='B' || CARRO=='b')
				X=KM/9;
       		else
				if (CARRO=='c' || CARRO=='C')
					X=KM/8;
	printf ("\nO consumo estimado de combustivel nesta essa viajem e para seu tipo de carro %c e: %.2f litros\n", CARRO, X);
	}
    system ("pause");
    return(0);
}
