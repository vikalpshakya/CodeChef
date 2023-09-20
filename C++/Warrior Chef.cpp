// Starters 101 Division 4 (Rated)

#include <iostream>
#include<vector>
using namespace std;

bool help(vector<int> &ans,int res,int stren);

int main() {
	int tt;
	cin >> tt;
	while(tt--){
	    int n , h;
	    cin >> n >> h;
	    vector<int>vec(n);
	    int maxi = -1;
	    for(int i = 0; i < n; i++){
	        cin >> vec[i];
	        maxi = max(maxi,vec[i]);
	    }
	    int s = 0,e = maxi;
	    int ans = 0;
	    int mid = (s + e) / 2;
	    while(s <= e){
	       if(help(vec,mid,h)){
	           ans = mid;
	           e = mid - 1;
	       }
	       else{
	           s = mid + 1;
	       }
	       mid = (s + e) / 2;
	    }
	    cout << ans << endl;
	    
	}
	return 0;
}

bool help(vector<int> &ans,int res,int stren){
    for(int i = 0 ; i < ans.size(); i++){
        if(ans[i] > res)
            if(stren > ans[i])
                stren-=ans[i];
            else return false;
    }
    return stren >= 1;
}
