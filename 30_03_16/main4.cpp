#include<iostream>
using namespace std;

class String{
	char* val;
public:
	String(char* value);
	~String(){delete [] val;};
	String(const String& rhs);
	void print() const{cout<<val<<endl;}
};

//def constructor copia
String::String(const String& rhs){
	val=new char[strlen(rhs.val)+1];
	strcpy(val,rhs.val);
}

//def constructor
String::String(char* rhs){
	val=new char[strlen(rhs)+1];
	strcpy(val,rhs);
}

//test unitario
void main(){
	String str ("Hola a los alumnos del a309");
	String str1=str;
	str1.print();
}