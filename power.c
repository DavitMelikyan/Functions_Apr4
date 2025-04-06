int power(int num, int exp) {
	int a = num;
	if (exp == 0) {
		return 1;
	}
	for (int i = 1; i < exp; ++i) {
		num *= a;
	}
	return num;
}
