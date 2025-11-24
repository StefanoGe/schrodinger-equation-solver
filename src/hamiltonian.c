// hamiltonian.c

#include "hamiltonian.h"

void disc_hamiltonian( SymmTrid * trid, const Vector * grid, 
												const Potential * potential )
{
	const int n_points = grid->length;
	symmtrid_init(trid, n_points);
	for( int i = 0; i < n_points; i++ )
		trid->diag[i]= 2 + pot_evaluate( potential, grid->data[i] );
		
	for( int i = 0; i < n_points - 1; i++ )
		trid->upper[i] = -1;
}
