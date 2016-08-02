#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color 0f");
	float AREA, PI, RAIO;
	PI=3.1416;
	printf ("Apresente o raio do circulo: ");
	scanf ("%f", &RAIO);
	AREA=PI*RAIO*RAIO;
	printf("A Area eh %f: ",AREA);
	return(0);
}
