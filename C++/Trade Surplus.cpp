// STAR 100D CONTEST
#include <iostream>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int a1,a2,b1,b2;
        cin >>a1>>a2>>b1>>b2;
        if((a1+b1)-(a2+b2)<0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
