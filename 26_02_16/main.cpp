#include <stdio.h>
#include <stdlib.h>

int suma(const int& lhs, const int& rhs){
	return lhs+rhs;
}

//int suma(const int& lhs, const int& rhs){
//	return lhs+rhs;
//}


void main(){7
	int n=5; int m=6;
	printf("%d \n", suma(n,m));
}