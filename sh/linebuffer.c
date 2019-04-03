
struct Line {

	struct Line * next;
	struct Line * last;
	char * line;
	
};

// This is the Pointer to the history buffer 
//
struct Line * hist_root;

// This is the Pointer to the complete stdout log
//
struct Line * stdout_root;



void init_hist(){

	
	
}




