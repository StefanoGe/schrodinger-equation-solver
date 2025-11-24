// tridiagonal.c

#include "tridiagonal.h"
#include <stdlib.h>
#include "io.h"

void symmtrid_init( SymmTrid * mat, int size )
{
	if( mat->diag || mat->upper )
		symmtrid_free( mat );
	
	mat->size = size;
	mat->upper = malloc( (size-1) * sizeof(double) );
	if(mat->upper)
		raise("could not allocate memory");
	mat->diag = malloc( size * sizeof(double) );
	if(mat->diag)
		raise("could not allocate memory");
}

void symmtrid_free( SymmTrid * mat )
{
	mat->size = 0;
	if( mat->diag )
		free(mat->diag);
	if(mat->upper)
		free(mat->upper);
}
