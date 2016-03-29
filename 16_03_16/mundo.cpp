#include<iostream>

using namespace std;

struct coord_t{
	double x;
	double y;
	double z;
	coord_t(double x, double y, double z): x(x), y(y), z(z) {}
	coord_t(const coord_t& c_out): x(c_out.x), y(c_out.y), z(c_out.z){}
};

class Esfera{
	double r;
	coord_t c;
public:
	Esfera(double radio, coord_t c):r(radio),c(c){}
	Esfera(const Esfera& e):r(e.r), c(e.c) {cout<<"llamando al CC de esfera"<<endl;}
	double get_radio(){return r;}
	coord_t get_coord(){return c;}
};

class Mundo{
	Esfera e;
public:
	Mundo (const Esfera& e): e(e){}
	void print(){
		cout<<"r:"<<e.get_radio()<<" x:"<<e.get_coord().x<<" y:"<<e.get_coord().y<<" z:"<<e.get_coord().z<<endl;
	}
};

void  main(){
	Esfera e(3, coord_t(1.0, 2.0, 3.0));
	Mundo m1(e);
	Mundo m2(m1);
	m1.print();
	m2.print();
}