#include <stdio.h>

void onetantable() {
	for (int j = 1; j <= 10; ++j) {
		printf("  Number \t I \t Result \n");
		for (int i = 1; i <= 10; ++i) {
			printf("   %d %13d %10d \n", j, i, j * i);
		}
	}
}
