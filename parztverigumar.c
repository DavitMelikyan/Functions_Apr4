#include <stdio.h>
int baj(int num);
int parztvgum(int num) {
	for(int i = 2; i <= num/2; ++i) {
		if (baj(i) && baj(num - i)) {
			return 1;
		} 
	}
	return 0;
}
