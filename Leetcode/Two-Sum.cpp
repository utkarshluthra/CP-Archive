#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for (int i =0; i<nums.size(); i++){
        int num1=nums[i];
        for (int j=i+1; j<nums.size(); j++){
            if (num1+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums;
    int target;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }
    cin>>target;
    twoSum(nums, target);
    return 0;
}