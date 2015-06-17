vector<vector<int>> threeSum(vector<int>& nums) {
	int n = nums.size();
	vector<vector<int>> r;
	if (n < 3) {
		return r;
	}
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; i++) {
		int a = nums[i];
		int low = i+1;
		int high = n-1;
		while(low < high) {
			int b = nums[low];
			int c = nums[high];
			if (a+b+c == 0) {
				vector<int> result;
				result.push_back(a);
				result.push_back(b);
				result.push_back(c);
				r.push_back(result;)
			} else if (a+b+c < 0) {
				while(low<high && nums[low]==nums[low+1]) low++;
				low ++;
			} else {
				while(low<high && nums[high]==nums[high-1]) high--;
				high--;
			}
		}
	}
	return r;
}