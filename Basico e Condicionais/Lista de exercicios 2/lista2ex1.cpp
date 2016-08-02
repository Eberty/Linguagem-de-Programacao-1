#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color f0");
	int NUM;
	printf ("Apresnete um numero inteiro: ");
	scanf ("%d", &NUM);
	printf ("Antecesor: %d \nSucessor: %d\n", NUM-1, NUM+1);
	return (0);
}
