int reverse(int x) {
	int sign = false;

	if (x < 0) {
		sign = true;
		x = x*(-1);
	}

	int y = 0;
	while (x != 0) {
		int n = x%10;
		if (y*10>INT_MAX-n) {
			return 0;
		}
		x = x / 10;
		y = y*10 + n;
	}
	return y;
}