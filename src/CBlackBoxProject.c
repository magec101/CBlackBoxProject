#include <stdio.h>
#include <string.h>

void cBlackBoxProjectMain(int argc, char** argv) {
	printf("Argc: %d", %d);
	if(argc == 2) {
		printf("Hello %s", argv[1]); 
	} else {
		printf("Hello unknown");
	}
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    cBlackBoxProjectMain(argc, argv);
    return 0;
}

#endif