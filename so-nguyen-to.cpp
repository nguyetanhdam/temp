// Kiểm tra xem n có phải số nguyên tố hay không?

#include <iostream>
#include <math.h>

using namespace std;

int isPrimeNumber(int n)
{
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2)
    {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int tmp = (int)sqrt(n);
    int i;
    for (i = 2; i <= tmp; i++)
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
    int n;
    cin >> n;
    if (isPrimeNumber(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
