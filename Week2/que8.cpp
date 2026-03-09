#include <iostream>
#include <vector>
using namespace std;

void countPairs(vector<int> &a, int k)
{
    int n = a.size();
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(abs(a[i] - a[j]) == k)
                c++;
        }
    }

    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int k;
        cin >> k;

        countPairs(a, k);
    }

    return 0;
}
