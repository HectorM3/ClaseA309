#include<iostream>
using namespace std;

class Foo{
	static int numref;
	int a;
public:
	Foo() {numref++;}
	~Foo() {numref--;}

	static int get_number_of_objects(){return numref;}
};
int Foo::numref=0;

void main(){
	Foo mifoo;
	Foo mifoo2;

	cout<<Foo::get_number_of_objects()<<endl;
}