#include <iostream>

using namespace std;

int minOperationsToBalance(int arr[], int n) {
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (oddCount != evenCount) {
        return (oddCount + evenCount) / 2; // Minimum operations to balance
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[100005]; // Assuming maximum array size is 100,000

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = minOperationsToBalance(arr, n);

        cout << result << endl;
    }

    return 0;
}
