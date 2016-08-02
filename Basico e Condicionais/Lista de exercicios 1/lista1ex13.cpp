#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float AREA, BASE, ALTURA;
	printf ("Informe a base do triangulo: ");
	scanf ("%f", &BASE);
	printf ("informe a altura do triangulo: ");
	scanf ("%f", &ALTURA);
	AREA=(BASE*ALTURA)/2;
	printf ("A area do triangulo eh: %f \n", AREA);
 	system ("pause");
 	return(0);
}
