#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int n;
int a[100010];

int main()
{
    ios::sync_with_stdio();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];

        int sum_1 = 0, sum_2 = 0;
        for (int i = 0; i < n; ++i) sum_2 += a[i];

        bool fl = 0;
        for (int i = 0; !fl && i < n; ++i)
        {
            sum_2 -= a[i];
            if (sum_1 == sum_2) fl = 1;
            sum_1 += a[i];
        }

        if (fl)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
