int fibo(int n) {
	int res = 0;
	int y = 0;
	int x = 1; 
	int count = 2;
	if (n < 2) {
		return n;
	}
	while (count <= n) {
		res = x + y;
		y = x;
		x = res;	
		++count;
	}
	return res;
}
