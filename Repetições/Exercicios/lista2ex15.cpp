#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int x, s=0;
	float media;
	for (x=50; x<=70; x++)
		if (x%2==0)
			s+=x;
	media=s/11;
	printf ("A soma dos pares na faixa de 50 a 70 eh: %d\nA media aritimetia eh %.1f\n", s, media);
	system ("pause");
	return(0);
}
