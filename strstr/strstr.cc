bool check(string haystack,string needle, int i) {
	for (int j = 0; j < needle.size(); j++) {
	    if (i+j >= haystack.size()) {
	        return false;
	    }
	    if (haystack[i+j]!=needle[j]) {
	        return false;
	    }
	}
	return true;
}

int strStr(string haystack, string needle) {
	int size1 = haystack.size();
	int size2 = needle.size();
	if (size1 == 0 && size2 == 0) {
		return 0;
	}
	for (int i = 0; i < size1; i++) {
		bool isExisting = check(haystack, needle, i);
		if (isExisting) {
			return i;
		}
	}
	return -1;
}