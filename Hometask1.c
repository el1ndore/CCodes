#include <stdio.h>

int main(int argc, char* argv[]) {
	
	if (argc == 1) {
		printf(":(\n");
		return 0;
	}

	if (argc < 3) {
		for (int i = 1; i < argc; ++i)
			printf("%s\n", argv[i]);
		return 0;
	}

	int sum = 0;
	for (int i = 1; i < argc * 3; ++i)
		sum += i;
	printf("%i\n", sum);
	return 0;
}