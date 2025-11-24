// tridiagonal.h

#ifndef SG_TRIDIAGONAL_H
#define SG_TRIDIAGONAL_H

typedef struct {
	int size;
	double * upper;
	double * diag;
} SymmTrid;

void symmtrid_init( SymmTrid * mat, int size );

void symmtrid_free( SymmTrid * mat );

#endif
