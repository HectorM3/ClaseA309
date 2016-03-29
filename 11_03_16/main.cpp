#include<iostream>

using namespace std;

class Foo{
public:
	~Foo(){ cout<<"llamando al destructor de Foo"<<endl;}
};

void funcfoo(){
	Foo mifoo;
}

int main(void){
	funcfoo();
	cout<<"el programa termina"<<endl;
}

