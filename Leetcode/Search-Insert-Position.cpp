#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int l, int r, int x){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return l;
}


int searchInsert(vector<int>& nums, int target) {
    int a = binarySearch(nums, 0, nums.size()-1, target);
    return a;
}

int main(){
    vector<int> nums;
    int target;
    int n;cin>>n;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        nums.push_back(ele);
    }
    cin>>target;
    cout<<searchInsert(nums, target);
    return 0;
}