#include <stdio.h>
int baj(int a)  {
        int count = 0;
	if (a == 1) {
		printf("Your number is not prime \n");
		return 0;
	}
        for (int x = 1; x <= a/2; ++x) {
                if (a % x == 0) {
                        ++count;
			if (count > 1) {
				printf("Your number is prime \n");
				return 1;
			}
                } else {
                        continue;
                }
        }
	printf("Your number is not prime \n");
	return 0;
}

