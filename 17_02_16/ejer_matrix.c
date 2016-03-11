#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_LINE 225

int** read_matrix(const char* filename, int* n, int* m){

	char line[SIZE_OF_LINE];
	char token;
	FILE* f;
	int row;

	while(!feof(f)){
		//protocol (extracts headers)
		fscanf(f, "%c", &token);

		if(token=='d'){
			fgets(line, SIZE_OF_LINE, f);
			if(sscanf(line, "%d %d", n, m)!=2){
				puts("error when reading dimension");
				return NULL;
			}

			//dynamic allocation of memory
			int index;
			int** matrix=(int**)malloc(sizeof(int*)*(*n));

			for(index=0, index(*n); index++){
				matrix[index]=(int*)malloc(sizeof(int)*(*m));
			}

		}else if(token=='r'){
			//reads elements one by one, for each row
			for(int i=0; i<(*m); i++){
				fscanf(f,"%d",&matrix[row][i]);
			}

			//read what is left of the line
			fgets(line, SIZE_OF_LINE, f);

			row++;
		}else{
			puts("unrecognized input");
			return 0;
		}
	}