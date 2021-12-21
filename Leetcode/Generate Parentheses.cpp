class Solution {
private:
    vector<string>ans;
    void backtrack(int start, int end, int n, string ele){
        if(ele.length()==n*2){
            ans.push_back(ele);
            return;
        }
        if(start<n){
        	backtrack(start+1,end,n,ele+"(");
        }
        if(end<start){
        	backtrack(start,end+1,n,ele+")");
        }
    }
    
public:
    vector<string> generateParenthesis(int n) {
        backtrack(0,0,n,"");
        return ans;
    }
};