void bt(vector<int> &nums,int size,vector<bool> &done,vector<int> &currentVector,int index,vector<vector<int> >&ans){
    currentVector.push_back(nums[index]);
    done[index]=true;
    if(currentVector.size()==size){
        ans.push_back(currentVector);
        currentVector.pop_back();
        done[index]=false;
        return;
    }
    for(int i=0;i<size;i++){
        if(done[i]==false){
            bt(nums,size,done,currentVector,i,ans);
        }
    }
    done[index]=false;
    currentVector.pop_back();
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int> > ans;
    int size=nums.size();
    vector<bool> done(size,false);
    vector<int> currentVector;
    for(int i=0;i<size;i++){
        bt(nums,size,done,currentVector,i,ans);
    }
    return ans;
}