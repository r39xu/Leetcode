#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    
    int lastFailure = -1;
    int maxlength = 0;
    unordered_map<char, int> map;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (map.find(c) == map.end()) {
            map[c] = i;
            int diff = i - lastFailure;
            if (diff>maxlength) {
                maxlength = diff;
            }
        } else {
            if (lastFailure < map[c]) {
                lastFailure = map[c];
            }
            int diff = i - lastFailure;
            map[c] = i;
            if (diff > maxlength) {
                maxlength = diff;
            }
        }
    }
    return maxlength;
}

int main() {

}