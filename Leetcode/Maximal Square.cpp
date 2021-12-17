int maximalSquare(vector<vector<char>>& matrix) {
    if(matrix.size()==0) {
        return 0;
    }

    int count = 0;
    int r = matrix.size();
    int c = matrix[0].size();

    vector<vector<int>> dp(r+1,vector<int>(c+1,0));

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(matrix[i-1][j-1]=='1'){
                dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]})+ 1;
                count=max(count,dp[i][j]);
            }
        }
    }
    int ans = count*count;
    return ans;
}