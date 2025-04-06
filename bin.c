#include <stdio.h>
int bin(int a) {
	for (int i = 128; i > 0; i /= 2) {
		if (i & a) {
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}
