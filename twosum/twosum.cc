#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> map;
	vector<int> result;
	int length = nums.size();
	for (int i = 0; i < length; i++) {
		int num = nums[i];
		if (map.find(num) != map.end()) {
			result.push_back(map[num]+1);
			result.push_back(i+1);
			break;
		} else {
			map[target-num] = i;
		}
	}
	return result;
}

int main() {
}