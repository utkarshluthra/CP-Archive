bool isMatch(string s, string p) {
    string a;
    vector<bool> checkStar;

    for (auto ch: p) {
        if (ch == '*') {
            checkStar[a.length()-1] = true;
        }
        else {
            a.push_back(ch);
            checkStar.push_back(false);
        }
    }

    vector<bool> vec1,  vec2;
    vec1.push_back(true);
    
    for (int i = 0; i < checkStar.size(); ++i) {
        vec1.push_back(false);
        if (checkStar[i] && vec1[i]) {
            vec1[i+1] = true;
        }
    }
    for (auto ch: s) {
        vec2.clear();
        vec1.swap(vec2);
        vec1.push_back(false);
        for (int i = 1; i < vec2.size(); ++i) {
            vec1.push_back(false);
            if (vec1[i-1] && checkStar[i-1]) {
                vec1[i] = true;
            }
            if (vec2[i] && checkStar[i-1] && (ch == a[i-1] || a[i-1] == '.')) {
                vec1[i] = true;
            }
            if (vec2[i-1] && (ch == a[i-1] || a[i-1] == '.')) {
                vec1[i] = true;
            }
        }
    }
    return vec1[a.length()];
}

int main(){
    string s, p;
    cin>>s>>p;
    cout<<isMatch(s,p);
    return 0;
}