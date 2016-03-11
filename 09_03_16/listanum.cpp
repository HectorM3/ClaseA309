#include <iostream>
#include "listanum.h"

using namespace std;

int ListaNum::get_size(){
	return nElem;
}

int ListaNum::get_elem(int pos){
	if(pos<nElem)
		return lista[pos];
	else return -1;
}

void ListaNum::add_elem(int dato){
	if(nElem<MAX_ELEM)
		lista[nElem++]=dato;
}


void ListaNum::print(){
	for(int i=0; i<nElem; i++)
		cout<<lista[i]<<" ";
}

