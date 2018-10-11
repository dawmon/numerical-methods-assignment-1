#include "hadamard.h"

// Include more headers if you need to.
#include <iostream>
using namespace std;

void print(double **mat)
{
	int i, j;
	for (i = 0; i < DIMENSION; i++)
	{
		for (j = 0; j < DIMENSION; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


int main(int argc, char** argv) {
  // Declare your matrices using pointers.
  // Launch your `hadamard` function and print results.

	int i, j;

	//creating and allocating matA
	double **matA = new double*[DIMENSION];
	for (i = 0; i < DIMENSION; i++)
		matA[i] = new double[DIMENSION];

	//creating and allocating matB
	double **matB = new double*[DIMENSION];
	for (i = 0; i < DIMENSION; i++)
		matB[i] = new double[DIMENSION];

	//creating and allocating matC
	double **matC = new double*[DIMENSION];
	for (i = 0; i < DIMENSION; i++)
		matC[i] = new double[DIMENSION];

	//init values in matrixes
	for (i = 0; i < DIMENSION; i++)
		for (j = 0; j < DIMENSION; j++)
		{
			matA[i][j] = 2;
			matB[i][j] = 3;
			matC[i][j] = 0;
		}

	hadamard(matA, matB, matC);

	print(matA);
	print(matB); 

	cout << "Wynik: " << endl;
	print(matC); 

  return 0;
}
