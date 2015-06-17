int longestConsecutive(vector<int>& nums) {
	map<int, bool> m;
	for (int i = 0; i < nums.size(); i++) {
		m[nums[i]] = false;
	}
	int mLen = 0;
	for (std::map::iterator it= m.begin(); it != m.end(); it++) {
		if (!map[it->second]) {
			int num = it->first;
			int n1 = num - 1;
			int l = 1;
			while (true) {
				if (m.find(n1) != m.end()) {
					m[n1] = true;
					l++;
					n1--;
				}
			}
			n1 = num+1;
			while (true) {
				if (m.find(n1) != m.end()) {
					m[n1] = true;
					l++;
					n1++;
				}
			}
			mLen = max(l,mLen);
		} else {
			continue;
		}
	}
	return mLen;
}