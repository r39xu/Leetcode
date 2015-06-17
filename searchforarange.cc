    vector<int> searchRange(vector<int>& nums, int target) {
	int startIndex = binary_search(nums, target);
	vector<int> n;
	if (startIndex == -1) {
		n.push_back(-1);
		n.push_back(-1);
		return n;
	} else {
		int i = startIndex-1;
		while (i>=0) {
			if (nums[i] == target) {
				i--;
			} else {
				break;
			}
		}
		n.push_back(i+1);
		i = startIndex+1;
		while (i < nums.size()) {
			if (nums[i] == target) {
				i++;
			} else {
				break;
			}
		}
		n.push_back(i-1);
	}
	return n;
}

    int binary_search(vector<int>& nums, int target) {
    	int low = 0;
    	int high = nums.size()-1;
    	while(low<=high) {
    		int mid = (low+high)/2;
    		if (nums[mid] == target) {
    			return mid;
    		}
    		if (target<=nums[mid]) {
    			high = mid-1;
    		} else {
    			low = mid + 1;
    		}
    	}
    	return -1;
    }