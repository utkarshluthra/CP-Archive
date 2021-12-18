int threeSumClosest(vector<int>& nums, int target) {
    if(nums.size() < 3) {
        return 0;
    }
    int ans = nums[0]+nums[1]+nums[2];
    sort(nums.begin(), nums.end());
    for(int t1 = 0 ; t1 < nums.size()-2 ; t1++) {
        
        if(t1 > 0 && nums[t1] == nums[t1-1]) continue;
        
        int t2 = t1+1;
        
        int t3 = nums.size()-1;   
        
        while(t2 < t3) {
            int currentSum = nums[t1]+nums[t2]+nums[t3];
            if(currentSum == target) return currentSum;
            if(abs(target-currentSum)<abs(target-ans)) {
                ans = currentSum;
            }
            if(currentSum > target) {
                t3--;
            } else {
                t2++;
            }
        }
    }
    return ans;
}