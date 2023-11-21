#include <stdio.h>
#include <stdlib.h>

int log_2(int x) {

	int counter = 0;
	int check_x = x;


	if (x < 0)
		return -2;
	
	while (x > 1) {
		++counter;
		x = x >> 1;
	}
	
	if (1 << counter != check_x)
		return -1;
	else
		return counter;
}

int main(int argc, char* argv[]) {

	printf("%i\n", log_2(atoi(argv[1])));
	
	return 0;
}
