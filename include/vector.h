// vector.h

# ifndef SG_VECTOR_H
# define SG_VECTOR_H

#include <stdio.h>

typedef struct
{
	double * data;
	int length;
} Vector;

void vec_init( Vector *, int length);

void vec_free( Vector *);

void vec_print( const Vector *, const char * format, FILE * );

void vec_fill( Vector *, double );

#endif
