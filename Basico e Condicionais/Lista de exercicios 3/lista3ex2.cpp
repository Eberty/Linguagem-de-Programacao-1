#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int N1, N2, N3, N4;
	printf ("Apresente 4 numeros inteiros: \n");
	scanf ("%d %d %d %d", &N1, &N2, &N3, &N4);
	if ((N1%2==0) && (N1%3==0))
		printf ("%d e divisivel por 2 e por 3\n", N1);
	else 
			if (N1%2==0)
				printf ("%d e divisivel por 2\n", N1);
			else
				if (N1%3==0)
					printf ("%d e divisivel por 3\n", N1);
	if ((N2%2==0) && (N2%3==0))
		printf ("%d e divisivel por 2 e por 3\n", N2);
	else 
			if (N2%2==0)
				printf ("%d e divisivel por 2\n", N2);
			else
				if (N2%3==0)
					printf ("%d e divisivel por 3\n", N2);
	if ((N3%2==0) && (N3%3==0))
		printf ("%d e divisivel por 2 e por 3\n", N3);
	else 
			if (N3%2==0)
				printf ("%d e divisivel por 2\n", N3);
			else
				if (N3%3==0)
					printf ("%d e divisivel por 3\n", N3);
	if ((N4%2==0) && (N4%3==0))
		printf ("%d e divisivel por 2 e por 3\n", N4);
	else 
			if (N4%2==0)
				printf ("%d e divisivel por 2\n", N4);
			else
				if (N4%3==0)
					printf ("%d e divisivel por 3\n", N4);
	system ("pause");
	return (0);
}
