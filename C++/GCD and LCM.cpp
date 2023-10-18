// Contest: START104C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int num1, num2, operations;
        cin >> num1 >> num2 >> operations;
        if (num1 == num2) {
            cout << 2 * num1 << endl;
            continue;
        }
        while (operations--) {
            int gcd_result = __gcd(num1, num2);
            if (num1 >= num2)
                num1 = gcd_result;
            else
                num2 = gcd_result;
            if (operations == 0 || (num1 == num2) || (num1 == 1 && num2 == 1)  )
                break;
            if (num1 > num2)
                num1 = (num1 * num2) / __gcd(num1, num2);
            else
                num2 = (num1 * num2) / __gcd(num1, num2);
            if ((num1 == 1 && num2 == 1)|| (num1 == num2) || (operations == 0) )
                break;
        }
        cout << num1 + num2 << endl;
    }
    return 0;
}
