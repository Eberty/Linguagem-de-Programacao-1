#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int c, f;
	for (c=10; c<=100; c+=10)
	{
		f=(9*c +160)/5;
		printf ("%d Celcius equivale a %d em Fahrenheit\n", c, f);
	}
	system ("pause");
	return(0);
}
