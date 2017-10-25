#include <stdio.h>

typedef struct
{
/***********************/
/*    Matrix-Klasse    */
/***********************/
  int nrows;
  int ncols;
  double **row;
} Matrix;


void Create_Matrix(Matrix *A, int m, int n)
{
/***************************/
/* Erzeugt eine mxn-Matrix */
/***************************/
	int i,j;

	A->nrows = m;												// Dimensionen der Matrix setzen
	A->ncols = n;												//

	double** row = malloc(sizeof(double*) * m);					// Speicher für m Zeilen reservieren

	for (i = 0 ; i < m ; i++)									// Speicher für Elemente jeder Zeile reservieren
	{															//
		row[i] = malloc(sizeof(double) * n);					//
		for (j = 0 ; j < n ; j++)								// alle Elemente auf 0 setzen
		{														//
			row[i][j] = 0;										//
		}														//
	}															//
	A->row = row;												// Zeile in der Struktur speichern
}


void Delete_Matrix(Matrix *A)
{
/*********************/
/* Löscht die Matrix */
/*********************/
	int i;

	for (i = 0 ; i < A->nrows ; i++)
	{
		free(A->row[i]);
	}
	free(A->row);
	A->nrows = 0;
	A->ncols = 0;
	A->row = 0;
}


void Print_Matrix(Matrix A)
{
/*********************/
/* Druckt die Matrix */
/*********************/

   int i,j;

   for (i = 0; i<A.nrows; i++)
   {
		for (j = 0 ; j < A.ncols ; j++)
			printf("%6.4f ", A.row[i][j]);
	   printf("\n");
       fflush(stdout);
   }
}