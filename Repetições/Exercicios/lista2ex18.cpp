#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i=1, NUM, MA, ME;
	NUM=2;
	while(NUM%3!=0)
	{
		printf ("Apresente um numero multiplo de 3: ");
		scanf ("%d", &NUM);
		if (NUM%3==0){
			MA=NUM;
			ME=NUM;
			i++;	
		}
		else
			printf ("Numero nao multiplo de 3\n\n");
	}
	while (i<=10)
	{
		printf ("Apresente um numero multiplo de 3: ");
		scanf ("%d", &NUM);
		if (NUM%3==0){
			if (NUM>MA)
				MA=NUM;
			if (NUM<ME)
				ME=NUM;
		i++;	
		}
		else
		printf ("\nNumero nao multiplo de 3, repita o passo:\n");		
	}
	printf ("\nMaior: %d\n", MA);
	printf ("Menor: %d\n", ME);
	system ("pause");
	return(0);
}
