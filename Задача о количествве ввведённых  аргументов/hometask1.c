#include <stdio.h>

int main(int argc, char* argv[]) {

	if (argc == 1)
		printf(":(\n");
	else if (argc <= 3) {
		for (int i = 1; i < argc; ++i)
			printf("%s ", argv[i]);
		printf("\n");
	} else
		printf("%lf\n", (1 + (argc - 1) * 3) * (argc - 1) * 3 / 2.0);
	
	return 0;
}
