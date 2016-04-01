#include<iostream>
using namespace std;

class Complex{
public:  //Al hacer public al struct podemos llamarle después como: Complex::c_t midato;
	struct c_t{
		double real;
		double im;
	};

	c_t num;
public:
	void print() const{  //El const nos permite que se le pueda llamar a print como mic.print.
		cout<<num.real<<","<<num.im<<endl;
	};
};

void main(){
	const Complex mic;
	mic.print();

	Complex::c_t midato;
	midato.im=5.0;
}
