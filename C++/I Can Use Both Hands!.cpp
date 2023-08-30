// August Long 2023 Division 4 Contest

#include <iostream>
using namespace std;

// Time complexity: O(1), Space complexity: O(1)

int main() {
    int t;
    cin >> t;
    while(t--){
        int page, code, min;
        cin >> page >> code >> min;
        int ans = 0;
        if(min % page == 0){
            ans = ans + min / page;
        }
        else if(min % page != 0){
            ans = ans + min / page + 1;
        }
        ans = ans + min / code;
        cout << ans << endl;
    }
	return 0;
}
