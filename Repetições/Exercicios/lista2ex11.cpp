#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int f, x, n, s=0, i;
	for (i=1; i<=15; i++)
	{
		printf ("Apresente um valor a ser dado o fatorial: ");
		scanf ("%d", &x);
		f=1;
		n=1;
		while (n<=x)
		{
			f*=n;
			n+=1;
		}
		s+=f;
	}
	printf ("A soma dos fatoriais eh: %d\n", s);
	system ("pause");
	return(0);
}
