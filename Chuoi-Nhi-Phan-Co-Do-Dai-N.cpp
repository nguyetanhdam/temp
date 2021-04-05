// Viết chương trình liệt kê tất cả các chuỗi nhị phân có độ dài n

#include <iostream>

using namespace std;

void output(int low, int high, int *X)
{
    int val;
    for (val = 0; val < 2; val++)
    {
        X[low] = val;
        if (low == (high- 1)) // neu low la phan tu cuoi cua day
        {
            for (int j = 0; j < high; j++) // in ra day so nhi phan moi tim duoc
            {
                cout << X[j];
            }
            cout << endl;
        }
        else
        {
            output(low + 1, high, X);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int X[n]; // khai bao mang X co do dai n - chuoi nhi phan do dai n
    output(0, n, X);
    return 0;
}
