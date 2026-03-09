#include <iostream>
#include <vector>
using namespace std;

void searchKey(vector<int> a, int key)
{
    int c = 0;
    for(int i = 0; i < a.size(); i++)
    {
        c++;
        if(a[i] == key)
        {
            cout << "Present " << c << endl;
            return;
        }
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
