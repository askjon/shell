#include <stdio.h>
#include <stdlib.h>
#include "defines.h"

unsigned int allocated_n = 0;
void * allocated_objects[MAX_OBJECTS];

void *
ush_malloc(size_t size)
{

	if (allocated_n <= MAX_OBJECTS){
	
		allocated_objects[allocated_n] = malloc(size);
		fprintf(stdout,"<ush_malloc> Allocated mem at %p",allocated_objects[allocated_n]);
		
	}else{
	
		fprintf(stdout,"<ush_malloc> Could not allocate another block of Memory");
		exit(0);
		
	}
	return allocated_objects[allocated_n++];
}

void
ush_free(void *ptr)
{
	unsigned int i = 0;
	while (i < allocated_n)
	{
		fprintf(stdout,"<ush_free> found allocated_object[%d] at %p while searching for %p",i ,allocated_objects[i], ptr);
		if (allocated_objects[i++] == ptr)
		{
			free(ptr);
			while (i < allocated_n)
			{
				allocated_objects[i - 1] = allocated_objects[i];
				i++;
			}
			allocated_n--;
			return;
		}

	}
	
	fprintf(stdout,"<ush_free> Seems like the ptr was not allocated with ush_malloc (Indicates memory leeks or ptr is already free)");
	return;

}
