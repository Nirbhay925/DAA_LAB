#include <iostream>
#include <vector>
using namespace std;

int firstPos(vector<int> &a, int key)
{
    int l = 0, r = a.size() - 1, ans = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == key)
        {
            ans = m;
            r = m - 1;
        }
        else if(a[m] < key)
            l = m + 1;
        else
            r = m - 1;
    }
    return ans;
}

int lastPos(vector<int> &a, int key)
{
    int l = 0, r = a.size() - 1, ans = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == key)
        {
            ans = m;
            l = m + 1;
        }
        else if(a[m] < key)
            l = m + 1;
        else
            r = m - 1;
    }
    return ans;
}

void findCopies(vector<int> &a, int key)
{
    int f = firstPos(a, key);
    if(f == -1)
    {
        cout << "Key not present" << endl;
        return;
    }
    int l = lastPos(a, key);
    cout << key << " - " << l - f + 1 << endl;
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

        int key;
        cin >> key;

        findCopies(a, key);
    }

    return 0;
}
