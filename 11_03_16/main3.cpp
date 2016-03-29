#include<iostream>

using namespace std;

class Foo{
	int nElem;
	int SIZE;
	int* vector;	//array dim variable

public: //Interfaz
	Foo(int n): SIZE(n), nElem(0){
		vector=new int[SIZE];
	}

	Foo(const Foo& f): SIZE(f.SIZE), nElem(f.nElem){
		this->vector=new int[SIZE];
		for(int i=0; i<SIZE; i++){
			this->vector[i]=f.vector[i];
		}
	}

	void print(){
		for(int i=0; i<nElem; i++){
			cout<<this->vector[i]<<" ";
		}
		cout<<endl;
	}

	void push_back(int dato){
		if(nElem<SIZE){
			this->vector[nElem++]=dato;
		}else{
			cout<<"capacidad excedida, dato no añadido"<<endl;
		}
	}

	~Foo(){
		if(vector){
			delete [] this->vector;
			vector==NULL;
		}
	}

};


void main(){
	Foo f1(5);
	f1.push_back(20);
	f1.push_back(30);
	Foo f2(f1);
	f2.print();
}