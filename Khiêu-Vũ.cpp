#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int i, n;
    double a[10005], b[10005];
    vector<double> nam;
    vector<double> nu;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        nam.push_back(a[i]);
        nu.push_back(b[i]);
    }
    sort(nam.begin(), nam.end());
    sort(nu.begin(), nu.end());
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (nam[i] > nu[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}

