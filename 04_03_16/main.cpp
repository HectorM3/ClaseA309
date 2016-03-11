#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

using namespace std;

struct alumno{
	char name[100];
	char course[100];
	unsigned int mat_id;
	unsigned int group;
};

int main(void){
	char formatted_name[100];
	alumno mialumno;
	strcpy(mialumno.name, "Héctor Monte");
	strcpy(mialumno.course, "Informática Industrial");
	mialumno.mat_id=49550;
	mialumno.group=3;

	//cadena con formato
	stringstream sstr("");
	sstr<<"Nombre: "<<mialumno.name<<endl;
	sstr<<"Asignatura: "<<mialumno.course<<endl;
	sstr<<"Matrícula_id: "<<mialumno.mat_id<<endl;
	sstr<<"Grupo: "<<mialumno.group<<endl;

	//copiar a una cadena de C
	strcpy(formatted_name, sstr.str().c_str());

	//salida a fichero
	ofstream  f("log.txt", ofstream::out);
	f<<formatted_name;

	f.close();
}