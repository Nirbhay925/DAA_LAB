#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int l, int r, int pivot) {
    int i;
    for (i = l; i <= r; i++) {
        if (a[i] == pivot) break;
    }
    swap(a[i], a[r]);

    int store = l;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            swap(a[store], a[j]);
            store++;
        }
    }
    swap(a[store], a[r]);
    return store;
}

int median(vector<int> &a, int l, int n) {
    sort(a.begin() + l, a.begin() + l + n);
    return a[l + n / 2];
}

int kthSmallest(vector<int> &a, int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int n = r - l + 1;

        vector<int> med((n + 4) / 5);
        int i;
        for (i = 0; i < n / 5; i++)
            med[i] = median(a, l + i * 5, 5);

        if (i * 5 < n) {
            med[i] = median(a, l + i * 5, n % 5);
            i++;
        }

        int medOfMed = (i == 1) ? med[i - 1] : kthSmallest(med, 0, i - 1, i / 2);

        int pos = partition(a, l, r, medOfMed);

        if (pos - l == k - 1) return a[pos];
        if (pos - l > k - 1) return kthSmallest(a, l, pos - 1, k);

        return kthSmallest(a, pos + 1, r, k - pos + l - 1);
    }
    return INT_MAX;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int k;
        cin >> k;

        if (k <= 0 || k > n) {
            cout << "not present" << endl;
        } else {
            int ans = kthSmallest(a, 0, n - 1, k);
            cout << ans << endl;
        }
    }
    return 0;
}
