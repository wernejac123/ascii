#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 100

int main(){
	char input[MAX_STRING];

	system("clear");
	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin);

	for(unsigned int i = 0; i < strlen(input); i++)
		printf("%02X ", (unsigned int)input[i]);
	printf("\n");

	return 0;
}
