#include <bits/stdc++.h>
using namespace std;

void findPair(vector<int> &a, int n, int key) {
    sort(a.begin(), a.end());

    int i = 0, j = n - 1;

    while (i < j) {
        int sum = a[i] + a[j];
        if (sum == key) {
            cout << a[i] << " " << a[j] << endl;
            return;
        } else if (sum < key) {
            i++;
        } else {
            j--;
        }
    }

    cout << "No Such Element Exist" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int key;
        cin >> key;

        findPair(a, n, key);
    }
    return 0;
}
