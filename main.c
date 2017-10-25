#include <stdio.h>
#include <stdlib.h>

#include "matrix.c"
#include "graph.c"

int main()
{
// Matrix erstellen
	Matrix A;
	Create_Matrix(&A,3,3);
	

// Matrix-Elemente setzen
	A.row[0][0] = 1;
	A.row[0][1] = 0;
	A.row[0][2] = 0;
	A.row[1][0] = 0;
	A.row[1][1] = 1;
	A.row[1][2] = 0;
	A.row[2][0] = 0;
	A.row[2][1] = 0;
	A.row[2][2] = 1;

	
// Matrix ausgeben
	//Print_Matrix(A);
	int i,j;
	   for (i = 0; i<A.nrows; i++)
   {
		for (j = 0 ; j < A.ncols ; j++)
			printf("%6.4f ", A.row[i][j]);
	   printf("\n");
       fflush(stdout);
   }
	
// Matrix löschen
	Delete_Matrix(&A);
}