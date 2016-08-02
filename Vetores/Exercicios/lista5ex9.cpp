#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, num, A[10];
	printf ("Apresente um numero para ser calculado a tabuada: ");
	scanf ("%d", &num);
	for (i=0; i<10; i++){
		A[i]= num*i;
		printf ("%d x %d = %d\n", num, i, A[i]);
	}
	system ("pause");
	return (0);
}
