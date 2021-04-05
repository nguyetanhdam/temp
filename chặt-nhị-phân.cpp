#include <iostream>

using namespace std;

int search(int key, int a[], int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (a[mid] == key)
        return mid;
    if (a[mid > key])
        return search(key, a, low, mid - 1);
    else
        return search(key, a, mid + 1, high);
}

/*
    1 2 3 4 5 6
    0 3 5 7 8 10
*/

int main()
{
    int key, n, a[10005];
    cin >> n >> key;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << search(key, a, 1, n);
    return 0;
}
