#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	float N1, N2, RES;
	char OP;
	printf("\n Calculadora das 4 operações basicas \n");
	printf ("\n Digite dois numeros : ");
	scanf ("%f %f", &N1, &N2);
	printf ("Digite a operação [ + - / * ]: ");
	fflush (stdin);
	OP=getchar();
	switch (OP)
	{
		case '+' : RES = N1 + N2; break;
		case '-' : RES = N1 - N2; break;
		case '*' : RES = N1 * N2; break;
		case '/' : if (N2 == 0)
						printf ("\n DIVISAO POR ZERO");
					else
						RES = N1/N2;
					break;
		default: printf ("Opcao invalida\n"); break;
	}
	if (OP=='+' || OP=='-' || OP=='/' || OP=='*')
		printf ("\n %.1f %c %.1f = %.1f \n", N1, OP, N2, RES);
	system ("pause");
	return(0);
}
