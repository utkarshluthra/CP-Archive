vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>>ans;
    sort(begin(nums),end(nums));
    ans.push_back(nums);
    while(next_permutation(nums.begin(), nums.end())){
        ans.push_back(nums);
    }
    return ans;
}