#define NUM_NAMES 3
#include <iostream>
#include <fstream>
using namespace std;

int main(void){
	char name [100];
	ofstream f("myC++file.txt", ofstream::out);
	for (int n=0; n<NUM_NAMES; n++){
		cout<<"please, enter name: "<<endl;
		cin>>name;
		f<<"Name "<<n+1<<" ["<<name<<"]"<<endl;
	}
	f.close();
	return 0;
}
