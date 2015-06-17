string longestPalindrome(string const& s) {
	int n = s.length();
	bool f[n][n];
	int maxLen = 0;
	string longest = "";
	fill_n(&f[0][0],n*n,false);
	for (int i = 0; i<n; i++) {

		if (i==j) {
				f[i][j] = true;
		}

		for (int j = 0; j < i; j++) {
			f[j][i] = s[i]==s[j] && (f[j+1][i-1] || i-j<2);
			if (f[j][i] && (i-j+1 > maxLen)) {
				maxLen = i-j+1;
				longest = s.substring(j,i-j+1);
			}
		}
	}
	return longest;
}