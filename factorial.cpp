#include <iostream>

using namespace std;

int fac(int x)
{
    if (x==1) return 1;
    else return x * fac(x-1);
}

int main()
{
    int x;
    cin >> x;
    cout << fac(x);
    return 0;
}
