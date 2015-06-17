class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	int n = strs.size();
	if (n < 1) {
		return "";
	}
	string longest = "";
	string firstItem = strs[0];

	for (int j = 0; j < firstItem.size(); j++) {
		string prefix = firstItem.substr(0,j+1);
		for (int i = 1; i < n; i++) {
			if (strs[i].substr(0,j+1) == prefix) {
				continue;
			} else {
				return longest;
			}
		}
		longest = prefix;
	}
	return longest;
}
};