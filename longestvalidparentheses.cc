int longestValidParentheses(string s) {
	stack<int> ss;
	int last = -1;
	int m = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			if (ss.empty()) {
				last = i;
			} else {
				ss.pop();
				if (ss.empty()) {
					m = max(m, i-last);
				} else {
					int index = ss.top();
					m = max(m, i-index);
				}
			}
		} else {
			ss.push(i);
		}
	}
	return m;
        
}