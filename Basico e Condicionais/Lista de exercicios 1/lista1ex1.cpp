#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float F, C;
	printf ("Apresente o valor da temperatura em graus celsius: ");
	scanf ("%f", &C);
	F=(9*C+160)/5;
	printf ("O valor em F eh: %f \n", F);
	system ("pause");
	return (0);
}
