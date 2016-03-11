#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv){
	int mat_id;
	if(argc!=3){
		cout<<"Numero de parametros incorrecto"<<endl;
		return 0;
	}
	cout<<argv[1]<<":"<<argv[2]<<endl;

	//conversor C++ de ASCII a int
	stringstream sstr("");
	sstr<<argv[2];
	sstr>>mat_id;
	
	cout<<"La matricula convertida con flujos es: "<<mat_id<<endl;
}