#include <iostream>
#include <vector>
using namespace std;

void searchKey(vector<int> a, int key)
{
    int n = a.size();
    int c = 0;
    int i = 0;

    while(i < n && a[i] < key)
    {
        c++;
        i += 2;
    }

    int start = i - 2;
    if(start < 0) start = 0;
    int end = i;
    if(end >= n) end = n - 1;

    for(int j = start; j <= end; j++)
    {
        c++;
        if(a[j] == key)
        {
            cout << "Present " << c << endl;
            return;
        }
    }

    cout << "Not Present " << c << endl;
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
