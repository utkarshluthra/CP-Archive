#include <iostream>
using namespace std;

int main() {
    int t, g1, g2, s1, s2, b1, b2;
    
    cin>>t;
    while(t!=0){
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        if(0<=g1<=30 && 0<=g2<=30 && 0<=s1<=30 && 0<=s2<=30 && 0<=b1<=30 && 0<=b2<=30){
            int score1=g1+s1+b1;
            int score2=g2+s2+b2;
            if (score1!=score2){
                if(score1>score2){
                    cout<<"1"<<endl;
                }else{
                    cout<<"2"<<endl;
                }
            }
        }    
    
        t--;
    }
	
	return 0;
}
