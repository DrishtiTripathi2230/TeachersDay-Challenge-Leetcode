#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int maxWatered = 0;

    // Try raining on each section
    for (int i = 0; i < n; i++) {
        int count = 1; // itself

        // Go left
        for (int j = i - 1; j >= 0; j--) {
            if (h[j] <= h[j + 1])
                count++;
            else
                break;
        }

        // Go right
        for (int j = i + 1; j < n; j++) {
            if (h[j] <= h[j - 1])
                count++;
            else
                break;
        }

        maxWatered = max(maxWatered, count);
    }

    cout << maxWatered << endl;
    return 0;
}
