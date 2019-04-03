#include <stdlib.h>
#include <stdio.h>

enum crypt_algorithm{
	
	NONE = 0,

	LAST
};

struct hdr {
	
	size_t size;

};


void *
dc_encrypt( enum crypt_algorithm algorithm, size_t pass_size, void * pass, size_t mem_size, void * mem2encrypt);

void *
dc_decrypt( enum crypt_algorithm algorithm, size_t pass_size, void * pass, size_t mem_size, void * mem2decrypt);


char *
str_intern( char *str );














int main(int argc,char **argv){
	

	char *str = malloc(sizeof(char)*64);
	if (fgets(str, 64, stdin) != NULL)
		printf("%s",str);


	return 0;	
}
