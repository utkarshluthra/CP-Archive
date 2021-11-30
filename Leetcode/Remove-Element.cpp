#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> nums, int val){
    int a = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == val)
                a++;
            else
                nums[i-a] = nums[i];
        }
        return nums.size()-a;
}

int main(){
    int n; cin>>n;
    vector<int> nums;
    for (int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele)
    }
    int val;
    cin>>val;

    int k = removeElement(nums, val);
    sort(nums, 0, k);
    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i]
    }
}