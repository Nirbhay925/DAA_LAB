#include <iostream>
#include <vector>
using namespace std;

void searchKey(vector<int> a, int key)
{
    int l = 0, r = a.size() - 1;
    int c = 0;

    while(l <= r)
    {
        int mid = (l + r) / 2;
        c++;

        if(a[mid] == key)
        {
            cout << "Present " << c << endl;
            return;
        }
        else if(key < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    cout << "NotPresent " << c << endl;
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

        searchKey(a, key);
    }

    return 0;
}
