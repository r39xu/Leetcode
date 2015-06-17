 int maxArea(vector<int>& height) {
	int ma = 0;
	int high = height.size()-1;
	int low = 0;
	while (low < high) {
		int area = (high-low) * (height[high]>height[low]?height[low] : height[high]);
		if (area > ma) {
			ma = area;
		}
		if (height[low] < height[high]) {
			while(low < high && height[low] > height[low+1]) {
				low++;
			}
			low++;
		} else {
			while(low < high && height[high] > height[high-1]) {
				high--;
			}
			high--;
		}
	}
	return ma;
}