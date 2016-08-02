#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int fat, n, i;
	for (n=1; n<=10; n++)
	{
		fat=1;
		i=1;
		if (n % 2 != 0)
		{
			while (i<=n)
			{
				fat*=i;
				i++;
			}
			printf ("Fatorial de %d eh %d\n", n, fat);
		}
	}
	system ("pause");
	return(0);
}
