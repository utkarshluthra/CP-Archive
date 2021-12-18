#include <bits/stdc++.h>
using namespace std;

vector<string> letterCombinations(string digits) {
    const vector<string> nums = {
                                "", "", "abc", "def", "ghi", "jkl",
                                "mno", "pqrs", "tuv", "wxyz"
                                };
    if (digits.empty()) {
        return {};
    }
    vector<string> result;
    result.push_back("");
    
    for(auto digit: digits) {
        vector<string> tmp;
        for(auto x: nums[digit - '0']) {
            for(auto s: result) {
                tmp.push_back(s + x);
            }
        }
        result.swap(tmp);
    }
    return result;
}
int main(){
    string digits;
    cin>>digits;
    cout<<letterCombination(digits);

    return 0;
}