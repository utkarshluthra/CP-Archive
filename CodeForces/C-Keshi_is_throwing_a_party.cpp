#include <bits/stdc++.h>
using namespace std;
 
#define long long long int

struct Friend {
	int poors, richs;
};
 
bool ok(int x, vector<Friend> &a) {
	int poor = 0, rich = x - 1, count = 0;
	for(Friend v : a) {
		if(v.poors >= poor && v.richs >= rich) {
			count++;
			poor++;
			rich--;
		}
	}
	return count >= x;
}
int main() {
ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
 
	int tm = 1;
	cin >> tm;
	while(tm--) {
		int n; cin >> n;
	  vector<Friend> v;
	  for(int i = 0; i < n; i++) {
		  int a, b;
		  cin >> a >> b;
 
		  Friend f;
		  f.richs = a;
		  f.poors = b;
		  v.push_back(f);
	  }
 
	  int low = 1, high = n;
	  while(high - low > 4) {
		  int mid = (low + high) >> 1;
		  if(ok(mid, v)) {
			  low  = mid;
		  } 
      else {
			  high = mid;
		  }
	  }
 
	  for(int i = high; i >= low; i--) {
		  if(ok(i, v)) {
			  cout << i << "\n";
			  
			  break;
		  }
   }
	}
 
	return 0;
}