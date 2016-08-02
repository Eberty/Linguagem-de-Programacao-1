#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
	int x,i;
	printf ("Apresente um valor a ser calculado sua tabuada: ");
	scanf ("%d", &x);
	for (i=1; i<=10; i++)
		printf ("%d x %d = %d\n", x,i,x*i);
	system ("pause");
	return (0);
}
