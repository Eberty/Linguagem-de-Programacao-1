#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	float v, s=0, m, i;
	for (i=1; i<=10; i++)
	{
		printf ("Apresente o valor numerico: ");
		scanf ("%f", &v);
		s+=v;
	}
	m = s/10;
	printf ("A soma dos numeros eh: %.1f\n", s);
	printf ("A media dos numeros eh: %.1f\n", m);
	system ("pause");
	return(0);
}
