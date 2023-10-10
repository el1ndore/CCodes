#include <stdio.h>

int main(int argc, char* argv[]) {

	for (int i = 1; i < argc; ++i) {
		if (i % 2 == 0)
			for (int j = 0; j < i / 2; ++j)
				printf("\t");
		printf("%s\n", argv[i]);
	}

	return 0;
}