#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system ("color 0f");
	float VOL, RAIO, ALTURA;
	printf ("Apresente o raio: ");
	scanf ("%f", &RAIO);
	printf ("Apresnete a altura: ");
	scanf ("%f", &ALTURA);
	VOL=3.14168*pow(RAIO,2)*ALTURA;
	printf ("O volume eh: %f \n", VOL);
	system ("pause");
	return (0);
}
