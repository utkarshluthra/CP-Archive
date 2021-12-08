bool check(int num, int f[]){
    int f2[10]={0};
    while(num){
        f2[num%10]+=1;
        num=num/10;
    }
    for (int i=0; i<=9; i++){
        if(f2[i]&&f2[i]> f[i]){
            return false;
        }
    }
    return true;
}

vector<int> findEvenNumbers(vector<int>& digits) {
    vector<int> ans;
    int f[20]={0};
    for(auto &it: digits){
        f[it]++;
    }
    //even number
    for (int i=100; i<=998; i+=2){
        if(check(i,f)){
            ans.push_back(i);
        }
    }
    return ans;
}