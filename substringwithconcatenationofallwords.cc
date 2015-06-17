bool check(string s, vector<string>& words, int i) {
    int wordSize = words[0].size();
    int numWords = words.size();
    map<string, int> wordMap;
    for (int index = 0; index < words.size(); index++) {
        wordMap[words[index]] = 1;
    }
    int subsize = numWords*wordSize;
    if (i+subsize >= s.length()) {
        return false;
    }
    for (int j = 0; j < numWords; j++) {
        string aWord =	s.substr(i+j*wordSize, wordSize);
        if (wordMap.find(aWord) != wordMap.end()) {
            wordMap.erase(aWord);
        }
    }
    return wordMap.empty();
}

vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> result;
    for (int i = 0; i < s.size(); i++) {
        bool isExisting = check(s, words, i);
        if (isExisting) {
            result.push_back(i);
        }
    }
    return result;
}