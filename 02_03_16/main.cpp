#include <stdio.h>

#define NUM_NAMES 3

int main(void){
	FILE * pFile;
	int n;
	char name [100];

	pFile = fopen ("myCfile.txt","w");
	for (n=0; n<NUM_NAMES; n++){
		puts ("please, enter name: ");
		gets(name);
		fprintf (pFile, "Name %d [%s]\n", n+1, name);
	}
	fclose (pFile);
	return 0;
}
