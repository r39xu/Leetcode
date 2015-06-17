vector<string> generateParenthesis(int n) {
	vector<string> result;
	generate(result,"",n, 0, 0);
	return result;
}

void generate(vector<string> &result, string s, int n, int l, int r) {
	if (l == n) {
		s.append(n-r,")");
		result.push_back(s);
		return;
	}
	if (l < n && l>= r) {
		s += "(";
		generate(result, s, n, l+1, r);
	}
	if (r<l && r<n) {
		s+=")";
		generate(result,s, n, l, r+1);
	}
}