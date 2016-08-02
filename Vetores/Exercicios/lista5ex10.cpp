#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
	int i, c=0, d=0, A[6], B[6], C[6], D[6];
	for (i=0; i<6; i++){
		printf ("Apresnete A[%d]: ", i);
		scanf ("%d", &A[i]);
		if (i%2!=0){
			C[c]=A[i];
			c++;
		}
		else{
			D[d]=A[i];
			d++;
		}
	}
	for (i=0; i<6; i++){
		printf ("Apresnete B[%d]: ", i);
		scanf ("%d", &B[i]);
		if (i%2!=0){
			C[c]=B[i];
			c++;
		}
		else{
			D[d]=B[i];
			d++;
		}
	}
	for (i=0; i<6; i++){
		printf ("C[%d]: %d		D[%d]: %d\n", i, C[i], i, D[i]);
	}
	system ("pause");
	return (0);
}
