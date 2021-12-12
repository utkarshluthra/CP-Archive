#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int target = digits.size() - 1;
    while (target >= 0 && digits[target] == 9) {
        digits[target] = 0;
        target--;
    }
    if (target == -1) {
        digits[0] = 1;
        digits.push_back(0);
    } else {
        digits[target]++;
    }
    return digits;
}

int main(){
    vector<int> digits;
    int n; cin>>n;
    for (int i=0;i<n;i++){
        int ele; cin>>ele;
        digits[i]=ele;
    }
    cout<<plusOne(digits);

    return 0;
}