//header interfaz para mat.cpp libreria de a309

namespace a309{
	struct punto_t{
		int x;
		int y;
	};

	inline int suma(int a, int b){
		puts("SUMA");
		return a+b;
	}

	punto_t suma(punto_t lhs, punto_t rhs){
		punto_t pres;
		pres.x=lhs.x+rhs.x;
		pres.y=lhs.y+rhs.y;
		return pres;
	}

	inline int resta(int a, int b){
		puts ("RESTA");
		return a-b;
	}

}