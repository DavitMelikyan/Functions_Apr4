#include <stdio.h>

void multab(int a) {
	printf("  Number \t i \t Result \n");
	for (int i = 1; i <= 10; ++i) {
		printf("     %d %11d \t %5d \n", a, i, a * i);
	}
}
