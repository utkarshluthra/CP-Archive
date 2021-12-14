#include <bis/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int flag = 1; 
    int result = 0; 
    int i = 0;
    int n = s.size();

    while (i < n && s[i] == ' ') { 
        i++; 
    }
    
    if (i < n && s[i] == '+') {
        flag = 1;
        i++;
    } else if (i < n && s[i] == '-') {
        flag = -1;
        i++;
    }
    
    while (i < n && isdigit(s[i])) {
        int digit = s[i] - '0';

        if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) { 
            if (flag==1){
                return INT_MAX;
            }else{
                return INT_MIN;
            }
        }
        result = 10 * result + digit;
        i++;
    }
    return flag * result;
}

int main(){
    string s;
    cin>>s;
    cout<<myAtoi(s);
    return 0;
}