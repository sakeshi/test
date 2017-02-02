
#include "lib.h"

int main(int argc, char **argv){
	print();
	int i;
	for (i=0; i < argc; i++)
    {
        printf("Argument %d : %s \n", i+1, argv[i]);
    }

    getchar();
	return 0;
}


