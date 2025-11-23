// vector.c

#include "vector.h"
#include "io.h"
#include <stdlib.h>
#include <stdbool.h>

void vec_init( Vector * vec, int length)
{
	vec->length = length;
	vec->data = malloc( length * sizeof(double) );
	
	if (vec->data == nullptr)
		raise("Memory could not be allocated");
}

void vec_free( Vector * vec )
{
	free(vec->data);
	vec->data = nullptr;
	vec->length = 0;
}

void vec_print( const Vector * vec, const char * format, FILE * output )
{
	for( int i = 0; i < vec->length; i ++ )
		fprintf( output,  format, vec->data[i] );
}

void vec_fill( Vector * vec, double value )
{
	for( int i = 0; i < vec->length; i ++ )
		vec->data[i] = value;
}

static inline bool vec_are_equal_length( const Vector * vec1, const Vector * vec2 )
{
	if( vec1->length == vec2->length )
		return true;
	return false;
}

void vec_copy( const Vector * source, Vector * destination )
{
	if( vec_are_equal_length( source, destination ) )
		raise( "vectors are not same length.\nsource: %d\ndestination: %d",
					source->length, destination->length);
	
	for(int i = 0; i < source->length; i ++)
		destination->data[i] = source->data[i];
}

