// Starters 105

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    ll sum = 0;
	    vector<ll>vec(n) ;
	    for(int i=0;i<n;i++){
	        cin>>vec[i];
	        sum+=vec[i];
	    }
	    ll k = sum/n;
	    sort(vec.begin(),vec.end());
	    bool o = true;

	   ll x = 0,y = 0;
	   for(int i = 0; i < n; i++){
	       ll e = vec[i];
	       if(e<=k){
	           if((k-e)%2 != 0){
	               o = false ; break;
	           }
	           x+=(k-e);
	       } 
	       else{
	           if((e-k) %2!=0){
	               o = false;
	               break;
	           }
	           y+=(e-k);
	       }
	   }
	   if(x == y && o) cout << "YES" << endl;
	   else {
	    cout << "No" << endl;
	   }
	   
	   
	}
	return 0;
}
