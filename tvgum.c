int sumdig(int num) {
	int num1 = 0;
	int sum = 0;
	while (num > 0) {
		num1 = num % 10;
		num /= 10;
		sum += num1;
	}
	return sum;
}
