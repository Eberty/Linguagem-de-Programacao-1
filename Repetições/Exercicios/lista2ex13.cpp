#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	float n, s=0, m=0;
	int t=0;
	printf ("Apresente um numero: ");
	scanf ("%f", &n);
	if (n>=0){
		s+=n;
		t++;
	}
	while (n>=0){
		printf ("Apresente um numero: ");
		scanf ("%f", &n);
		if (n>=0){
			s+=n;
			t++;
		}
	}
	printf ("Voce informou um numero negativo e ele nao sera computado\n\n\n");
	m=s/t;
	printf (" Soma: %.2f\n Media: %.2f\n Quantidade de termos: %d\n", s, m, t);
	system ("pause");
	return(0);
}
