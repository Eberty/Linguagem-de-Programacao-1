#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int x;
	for (x=1; x<=20; x++)
	{
		if (x%2!=0)
			printf ("%d eh impar\n", x);
	}
	system ("pause");
	return(0);
}
