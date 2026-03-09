#include <iostream>
#include <vector>
using namespace std;

void findSeq(vector<int> &a)
{
    int n = a.size();
    for(int k = n - 1; k >= 0; k--)
    {
        int i = 0, j = k - 1;
        while(i < j)
        {
            int s = a[i] + a[j];
            if(s == a[k])
            {
                cout << i + 1 << "," << j + 1 << "," << k + 1 << endl;
                return;
            }
            else if(s < a[k])
                i++;
            else
                j--;
        }
    }
    cout << "No sequence found" << endl;
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

        findSeq(a);
    }

    return 0;
}
