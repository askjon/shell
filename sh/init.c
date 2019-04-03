
#include "defines.h"


ush_main(int argc, char **argv){


	ush_free(ush_malloc(1));

/*
	int i;
	void * test[MAX_OBJECTS];
	for (i = 0; i < MAX_OBJECTS; i++){
	test[i] = ush_malloc(sizeof(int));
		
	}
	for (i = 0; i < MAX_OBJECTS; i++){
	ush_free(test[i]);
		
	}
*/	
	return 0;	
}
