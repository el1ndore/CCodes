#include <stdio.h>
#include <stdlib.h>

int bin_gcd(int a, int b) {
    
    if (a == 0)
        return b;
    
    if (b == 0)
        return a;
    
    if (a == b)
        return a;
    
    if (a == 1 || b == 1)
        return 1;
    
    if (a % 2 == 0 && b % 2 == 0)
        return 2 * bin_gcd(a >> 1, b >> 1);
    
    if (a % 2 == 0 && b % 2 != 0)
        return bin_gcd(a >> 1, b);
    
    if (a % 2 != 0 && b % 2 == 0)
        return bin_gcd(a, b >> 1);
    
    if (a < b)
        return bin_gcd((b - a) >> 1, a);
    else
        return bin_gcd((a - b) >> 1, b);
}

int main(int argc, char* argv[]) {

	printf("%i\n", bin_gcd(atoi(argv[1]), atoi(argv[2])));
	
	return 0;
}
