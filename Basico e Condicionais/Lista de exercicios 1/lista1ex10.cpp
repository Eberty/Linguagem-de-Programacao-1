#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("Color 0f");
	float C, F;
	printf (" Apresente a temperatura em F: ");
	scanf ("%f",&F);
	C=5*(F-32)/9;
	printf ("Seu valor em graus C eh: %f \n", C);
	system ("pause");
	return(0);
}
