 bool isValid(string s) {
	stack<int> c;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i]=='(' || s[i]=='[' || s[i]=='{') {
			c.push(s[i]);
		} else {
		    if (c.empty()) {
		        return false;
		    }
			char p = c.top();
			c.pop();
			if ((p=='(' && s[i]==')') || (p=='[' && s[i]==']') || (p=='{'&&s[i]=='}')) {

			} else {
				return false;
			}
		}
	}
	if (!c.empty()) {
	    return false;
	}
	return true;
}