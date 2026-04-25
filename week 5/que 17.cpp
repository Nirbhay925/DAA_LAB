#include <bits/stdc++.h>
using namespace std;

vector<int> findCommon(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    int m = a.size(), n = b.size();
    vector<int> res;

    while (i < m && j < n) {
        if (a[i] == b[j]) {
            if (res.empty() || res.back() != a[i])
                res.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    return res;
}

int main() {
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> res = findCommon(a, b);

    if (res.empty()) {
        cout << "No Common Elements";
    } else {
        for (int x : res) cout << x << " ";
    }

    return 0;
}
