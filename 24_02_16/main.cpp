#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 64

enum casilla_t {A1=0, B1, C1, D1, E1, F1, G1, H1, A2, B2, C2, D2, E2, F2, G2, H2, A3, B3, C3, D3, E3, F3, G3, H3, A4, B4, C4, D4, E4, F4, G4, H4}; //Unas pocas casillas
enum pieza_t {PEON_BLANCO=0, CABALLO_BLANCO, ALFIL_BLANCO, TORRE_BLANCO, REINA_BLANCO, REY_BLANCO, PEON_NEGRO=0, CABALLO_NEGRO, ALFIL_NEGRO, TORRE_NEGRO, REINA_NEGRO, REY_NEGRO};

casilla_t tablero[N];

int main(void){
	//TIRAR EL DADO ENTRE 0 Y 12
	pieza_t pieza=ALFIL_BLANCO;    //alfil blanco

	//relleno tablero
	tablero[H1]=ALFIL_BLANCO;

}