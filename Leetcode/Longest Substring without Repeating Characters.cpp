int lengthOfLongestSubstring(string s) {
    vector<int> ss(256, -1);
    int ml = 0, start = -1;
    for (int i = 0; i != s.length(); i++) {
        if (ss[s[i]] > start)
            start = ss[s[i]];
        ss[s[i]] = i;
        ml = max(ml, i - start);
    }
    return ml;
}