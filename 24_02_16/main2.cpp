#include <stdio.h>
#include <stdlib.h>

#include "mat.h"

using namespace a309;

int main(void){
	printf("la suma es: %d\n", suma(32,3));
	printf("la suma es: %d\n", resta(32,3));
	punto_t mipuntoRes;
	punto_t mipunto1={0,1};
	punto_t mipunto2={1,0};
	mipuntoRes=suma(mipunto1, mipunto2);   
}	