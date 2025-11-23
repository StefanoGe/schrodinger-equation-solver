//potentials.c

#include "potentials.h"

double pot_evaluate(const Potential * potential, double x)
{
	return potential->func( x, potential->params );
}

double func_square_well( double x, double * params )
{
	/* params[0] is left wall position
	 * params[1] is right wall position
	 * params[2] is V0.
	 */ 
	const bool is_in_well = x > params[0] && x < params[1];
	return is_in_well ? 0 : params[2];
}

void infinite_square_well_init ( Potential * potential, double x1, double x2, 
								double V0 )
{
	potential->func = func_square_well;	
	if( potential->params )
		free(potential->params);
	potential->params = malloc( 3 * sizeof(double) );
	potential->params[0] = x1;
	potential->params[1] = x2;
	potential->params[2] = V0;
}

void potential_free( Potential * potential )
{
	free(potential->params);
	potential->params = nullptr;
	potential->func = nullptr;
}
