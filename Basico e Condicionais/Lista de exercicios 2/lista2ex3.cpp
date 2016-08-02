#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int X, Y, Q, R;
	printf ("Apresente x e y: \n");
	scanf ("%d %d", &X, &Y);
	printf ("O quociente da divisao de x por y eh: %d \nO resto eh: %d \n", X/Y, X%Y);
	system ("pause");
	return(0);
}
