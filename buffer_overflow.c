#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	char buffer[5];

	if(argc<2){
		printf("strcpy() aborted...\n");
		printf("usage: %s <characters>\n", argv[0]);
	}

	strcpy(buffer, argv[1]);
	printf("buffer content= %s \n",buffer);
	printf("strcpy() executed");

	return 0;

}

