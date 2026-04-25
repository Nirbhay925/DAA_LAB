#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> freq(26, 0);

        for (int i = 0; i < n; i++) {
            freq[a[i] - 'a']++;
        }

        int maxFreq = 0;
        char result;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = char(i + 'a');
            }
        }

        if (maxFreq <= 1) {
            cout << "No Duplicates Present" << endl;
        } else {
            cout << result << "-" << maxFreq << endl;
        }
    }
    return 0;
}
