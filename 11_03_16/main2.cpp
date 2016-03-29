#include<iostream>

using namespace std;

class Foo{
public:
	int a;
	int b;
	Foo(){}                //Es necesario poner el constructor, ya que al poner el otro, no se crea por defecto.
	Foo(const Foo&){}
};

void main(){
	Foo mifoo;
	Foo mifoo_1(mifoo);
}