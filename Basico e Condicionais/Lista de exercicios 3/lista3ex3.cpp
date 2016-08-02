#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float NUM;
	printf ("Apresente um numero qualquer: ");
	scanf ("%f", &NUM);
	if ((NUM>= 20) && (NUM<=90))
		printf ("%.1f se encontra na faixa entre 20 e 90 \n", NUM);
	else
		printf ("%.1f nao esta entre 20 e 90 \n", NUM);
	system ("pause");
	return (0);
}
