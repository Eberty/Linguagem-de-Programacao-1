#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system("color 0f");
	float N1, N2, N3, MED;
	printf ("Apresente nota 1, 2 e 3: \n");
	scanf ("%f %f %f", &N1, &N2, &N3);
	MED = (N1+N2+N3)/3;
	printf ("A media eh: %f \n", MED);
	return (0);
}
