#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
/***********************/
/*   Graphen-Klasse    */
/***********************/
  int kanten;			// Anzahl der Kanten
  int knoten;			// Anzahl der Knoten
  bool directed;		// gibt an, ob der Graph gerichtet (true) oder ungerichtet (false) ist
  //Adjazenzliste oder -matrix?
} graph;



/* Funktionen fuer Graphen-Klasse */

void graph_create (graph *g, int n, bool directed)
{
/************************/
/* Erzeugen des Graphen */
/************************/
  g->knoten = n;
  g->directed = directed;
  g->kanten = 0;
}

void graph_print (graph g)
{
/************************/
/* Drucken des Graphen */
/************************/
// Ausgabe der Knotenanzahl
  printf ("Der Graph ist gerichtet: %d\n", g.directed);
  printf ("Der Graph hat %i Knoten.\n", g.knoten);
  printf ("Der Graph hat %i Kanten.\n", g.kanten);
}


/*
/*********************/
/* Kante hinzufügen  */
/*********************/
void graph_add_edge (graph *g, int source, int target)
{
    
}

/*
void graph_remove_edge (graph * g, int source, int target);

int graph_remove_vertex (graph g *);

void graph_free (graph * g);
*/
/*
// Main
int main ()
{
// Graph erstellen
// To Do: Speicher allokieren
  graph g;
  graph_create(&g, 2, true);
  graph_print(g);
  

}
*/