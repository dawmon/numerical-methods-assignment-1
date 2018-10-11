#include "hadamard.h"

// Implement your function here.
void hadamard(double **a, double **b, double **c)
{
	int i, j;

	for (i = 0; i < DIMENSION; i++)
		for (j = 0; j < DIMENSION; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
}