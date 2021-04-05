#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    long long a, b;
    cin >> a >> b;
    if ((a > 0 && b > 0) || (a < 0 && b < 0))
    {

        cout << a / gcd(a, b) << '/' << b / gcd(a, b);
        return 0;
    }
    else
    {

        cout << -a / gcd(a, b) << '/' << -b / gcd(a, b);
        return 0;
    }
    return 0;
}
