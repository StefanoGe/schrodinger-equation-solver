// potentials.h

#ifndef SG_POTENTIALS_H
#define SG_POTENTIALS_H

#include <stdbool.h>
#include <stdlib.h>

typedef double (*PotentialFunc)(double x, double *params);

typedef struct{
	PotentialFunc func;
	double *params;
} Potential;

double pot_evaluate(const Potential * potential, double x);

double func_square_well( double x, double * params );

void infinite_square_well_init ( Potential * potential, double x1, double x2, 
								double V0 );

void potential_free( Potential * potential );

#endif
