string convert(string s, int numRows) {
    if (numRows == 1) {
        return s;
    }
    vector<string> v(numRows);
    int step = 1;
    int currentRow = 0;
    for (int i = 0; i < s.size(); i++) {
        v[currentRow].push_back(s[i]);
        if (currentRow == numRows-1){
            step = -1;
        }
        if (currentRow == 0)
        {
            step = 1;
        }
        currentRow += step;
    }
    string sum = "";
    for (int i = 0; i < numRows; i++) {
        sum += v[i];
    }
    return sum;
}