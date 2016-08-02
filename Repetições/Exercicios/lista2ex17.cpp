#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int num, maior, menor;
	printf ("Apresente um numero: ");
	scanf ("%d", &num);
	maior=num;
	menor=num;
	while (num>=0){
		printf ("Apresente um numero: ");
		scanf ("%d", &num);
		if (num>maior)
			maior=num;
		if (num<menor && num>0)
			menor=num;
	}
	printf ("Numeros negativos nao sao permitidos\n\n\n");
	printf ("Maior numero: %d\nMenor numero: %d\n", maior, menor);
	system ("pause");
	return(0);
}
