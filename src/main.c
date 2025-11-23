// main.c
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

#define L 1
#define DEF_V0 100'000

typedef struct {
	int n_grid;
	double dx;
	double starting_energy;
	double dE;
	double phi0;
	double phi_min1;
} ShootingParams;

void initialize( ShootingParams params, Vector * spat_grid, Vector * phi_grid )
{
	vec_init(spat_grid, params.n_grid);
	vec_init(spat_grid, params.n_grid);
	for( int i = 0; i < params.n_grid; i++ )
		spat_grid->data[i] = params.dx * i;
	
	
}

void calculate(  )
{
	
	
	
}


int main()
{
	Potential inf_sqr_well;
	infinite_square_well_init( &inf_sqr_well, -L, L, DEF_V0 );



	potential_free(&inf_sqr_well);
	
	exit(EXIT_SUCCESS);
}

