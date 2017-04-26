#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * polygons;
  struct stack * stacker;

  edges = new_matrix(4, 4);
  polygons = new_matrix(4, 4);
  stacker = new_stack();

  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */

  if ( argc == 2 )
    parse_file( argv[1], polygons, edges, s, stacker );
  else
    parse_file( "stdin", polygons, edges, s, stacker );

  
  free_matrix( edges );
  free_matrix( polygons );
  free_stack( stacker);
}  
