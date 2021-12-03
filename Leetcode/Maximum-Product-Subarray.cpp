#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    vector<int> Min(nums), Max(nums);
    int ans = nums[0];
    for(int i = 1; i < size(nums); i++) {
        Min[i] = min(nums[i], nums[i] * (nums[i] >= 0 ? Min[i-1] : Max[i-1]));
        Max[i] = max(nums[i], nums[i] * (nums[i] >= 0 ? Max[i-1] : Min[i-1]));
        ans = max(ans, Max[i]);
    }
    return ans;
}

int main(){
    vector<int> nums;
    int n; cin>>n;
    for (int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    }
    cout<<maxProduct(nums);
    return 0;
}