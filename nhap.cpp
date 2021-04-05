#include <iostream>

using namespace std;

int sodaonguoc (int n)
{
    int tmp, res = 0;
    while (n > 0)
    {
        tmp = n % 10;
        res = 10 * res + tmp;
        n /= 10;
    }
    return res;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << sodaonguoc(i) << " " << sodaonguoc(j) << " " << sodaonguoc(k);
    return 0;
}
