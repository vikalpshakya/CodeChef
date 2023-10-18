// Contest: START104C

#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize, requiredSum;
        cin >> arraySize >> requiredSum;

        int totalSum = 0;

        for (int i = 0; i < arraySize; i++) {
            int currentValue;
            cin >> currentValue;
            totalSum += currentValue;
        }

        if (totalSum < arraySize) {
            cout << "NO" << endl;
        } else if (requiredSum == 0) {
            if (!(totalSum % arraySize == 0)) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
