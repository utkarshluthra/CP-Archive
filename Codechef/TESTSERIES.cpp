#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int score[5];
	    int india=0, england=0;
	    for (int i=0; i<5; i++){
	        cin>>score[i];
	        if (score[i]==1){
	            india++;
	        }
	        else if (score[i]==2){
	            england++;
	        }
	        else{
	            continue;
	        }
	    }
	    if (india>england){
	        cout<<"INDIA"<<endl;
	    }
	    else if (england>india){
	        cout<<"ENGLAND"<<endl;
	    }
	    else{
	        cout<<"DRAW"<<endl;
	    }
	}
	return 0;
}
