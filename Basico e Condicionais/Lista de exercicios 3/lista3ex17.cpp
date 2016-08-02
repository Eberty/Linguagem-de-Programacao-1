//criar algoritimo que leia o valor de x, calcule e mostre o valor de f(x) sendo que f(x)=8/(2-x)
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	float x, y=0;
	printf ("Apresnte o valor de x para a equacao f(x)=8/(2-x)\n");
	scanf ("%f", &x);
	y = 8/(2-x);
	if (x==2)
		printf ("DIVISAO POR ZERO\n");
	else
		printf ("\n O valor de f(x) para x=%.2f e de %.2f \n", x, y);
	system ("pause");
	return(0);
}
