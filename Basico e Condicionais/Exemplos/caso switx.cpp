#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system("color f0");
	float N1, N2, RES;
	char OP;
	printf("\n Calculadora das 4 operações basicas \n");
	printf ("\n Digite dois numeros : ");
	scanf ("%f %f", &N1, &N2);
	printf ("Digite a operação [ + - / * ]: ");
	fflush (stdin);
	OP= getchar();
	switch (OP)
	{
		case '+' : RES = N1 + N2; break;
		case '-' : RES = N1 - N2; break;
		case '*' : RES = N1 * N2; break;
		case '/' : if (N2 != 0)
						RES = N1/N2;
					else
						printf ("\n DIVISÃO POR ZERO");
					break;
		default : printf ("Opção Inválida");
			break;
	}
	if (OP == '+' || OP =='-' || OP =='*'|| OP =='/' )
		printf ("\n %.1f %c %.1f = %.1f \n\n", N1, OP, N2, RES);
	system ("pause");
	return(0);
}
