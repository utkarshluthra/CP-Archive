vector<vector<int> > threeSum(vector<int>& nums) {
    vector<vector<int> > ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        int m = -nums[i];
        int r = i + 1;
        int l = nums.size() - 1;

        while (r < l) {
            int x = nums[r] + nums[l];
            if (x < m){
                r++;
            }
            else if (x > m){
                l--;
            }
            else {
                vector<int> temp = {nums[i], nums[r], nums[l]};
                ans.push_back(temp);
                while (r < l && nums[r] == temp[1]) {
                	r++;
                }
                while (r < l && nums[l] == temp[2]) {
                	l--;
                }
            }
            
        }

        while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
            i++;
        }
    }
    return ans;
}