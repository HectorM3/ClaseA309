#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_LINE 225

//declaración función lectura del fichero con protocolo y extraccion del dato
int read_file(const char* filename, int* dato){

	char linea[SIZE_OF_LINE];
	char token;
	FILE* f;


	//abrir el fichero y sacar en pantalla las lineas de texto
	f=fopen(filename,"r");
	if(f==NULL){
		puts("error al abrir el fichero");
		return -1;
	}

	//leo
	while(!feof(f)){
		fgets(linea,SIZE_OF_LINE,f);
		if(ferror(f)){
			puts("error al abrir el fichero");
			return -1;
		}

		//protocolo
		sscanf(linea, "%c", &token);

		switch(token){
		case 'c':
			break;
		case 'd':
			sscanf(linea, "%c %d",&token,dato);
			break;
		default:
			puts("protocolo incorrecto");
		}

	}//fin del bloque lectura

	fclose(f);
	return 0;
}


int main(void){
	int midato;
	if(read_file("datos.txt",&midato)==-1){
		puts("Lectura incorrecta del archivo");
	}
	printf("el dato es: %d\n", midato);

	//char linea[SIZE_OF_LINE];
	//char token;
	//int dato;
	//FILE* f;
	//FILE* flog;

	////abrir el fichero y sacar en pantalla las lineas de texto
	//f=fopen("datos.txt","r");
	//if(f==NULL){
	//	puts("error al abrir el fichero");
	//	return -1;
	//}

	////leo
	//flog=fopen("log.txt","w"); //LO ABRIMOS FUERA DE LA LECTURA
	//while(!feof(f)){
	//	fgets(linea,SIZE_OF_LINE,f);
	//	if(ferror(f)){
	//		puts("error al abrir el fichero");
	//		return -1;
	//	}

	//	//protocolo
	//	sscanf(linea, "%c", &token);

	//	switch(token){
	//	case 'c':
	//		break;
	//	case 'd':
	//		sscanf(linea, "%c %d",&token,&dato);
	//		printf("el dato es: %d\n", dato);
	//		//escribo el dato en "log.txt"
	//		fprintf(flog,"el dato es: %d\n",dato);

	//		break;
	//	default:
	//		puts("protocolo incorrecto");
	//	}

	//	//if(token=='c'){
	//	//	continue;    //siguiente iteración
	//	//}else if(token=='d'){
	//	//	sscanf(linea, "%c %d",&token,&dato);
	//	//	printf("el dato es: %d\n", dato);
	//	//}else{
	//	//	puts("protocolo incorrecto");
	//	//}


	//	//printf(linea);
	//}//fin del bloque lectura

	//fclose(f);
	//fclose(flog);
	//return 0;
}
