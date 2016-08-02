#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	char COM[40], R;
	float L, C, A, S=0;
	do{
		A=0;
		L=0;
		C=0;
		printf ("De qual comodo deseja calcular a area? ");
		fflush (stdin);
		fgets (COM,40,stdin);
		printf ("Informe a largura e o comprimento do(a) %s", COM);
		scanf ("%f %f", &L, &C);
		A=L*C;
		S+=A;
		printf ("A area do(a) %s:%.1f\n", COM, A);
		printf ("\nDeseja apresentar outro comodo? (s/n) ");
		fflush (stdin);
		R=getchar();
	} while (R=='s' || R=='S');
	printf ("A soma de todas as areas eh: %.1f\n\n", S);
	system ("pause");
	return(0);
}
