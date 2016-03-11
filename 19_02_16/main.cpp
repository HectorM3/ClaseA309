#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

enum dado_t {UNO=1, DOS, TRES, CUATRO, CINCO, SEIS};

void imprime_dado(enum dado_t d){
	switch(d){
	case UNO: 
		puts("UNO");
		break;
	case DOS: 
		puts("DOS");
		break;
	case TRES:
		puts("TRES");
		break;
	case CUATRO: 
		puts("CUATRO");
		break;
	case CINCO: 
		puts("CINCO");
		break;
	case SEIS:
		puts("SEIS");
		break;
	}

}
int main(void){
	srand (time(NULL));
	int tirada=1 + rand()%6;
	dado_t dado= (dado_t)tirada;
	imprime_dado(dado);
}
