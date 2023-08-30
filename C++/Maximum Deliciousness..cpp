 // August Long 2023 Division 4 Contest
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(N) , Space complexity: O(1) [not considering the space occupied by input vector]

int main() {
    int t;
    cin >> t;
    while(t--){
        int numP, k, l;
        cin >> numP >> k >> l;
        vector<long long>vec(numP,0);
        for(int i = 0; i < numP; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        long long count = 0;
        int index = numP-l;
        while(index >= 0 ){
            count += vec[index];   
            index = index - k;
        }
    cout << count << endl;
	
    }
    return 0;
}
