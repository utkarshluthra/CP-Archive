class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        if(nums.size()<=1){
            return false;
        }
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
        }
        if (nums[nums.size()-1]==nums[nums.size()-2]){
            count++;
        }
        if(count){
            return true;
        }
        else{
            return false;
        }
    }
};