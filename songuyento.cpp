#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int isPrimeNumber(int n)
{
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2)
    {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int squareRoot = (int)sqrt(n);
    int i;
    for (i = 2; i <= squareRoot; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long i, n, k;
    //vector <long long> vec;
    cin >> k >> n;
    cout << "Cac so nguyen to nho hon " << n << " va lon hon " << k << " la: " << endl;
    for (i = k; i < n; i++)
    {
        if (isPrimeNumber(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
