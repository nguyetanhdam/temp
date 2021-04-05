#include <iostream>

using namespace std;

int i, j, N, x[10001], y[10001];
int okHang, okCot, okCheo;

int main()
{
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
        {
            if (x[i] == x[j])
                okHang++;
            if (y[i] == y[j])
                okCot++;
            if (x[i] - y[i] == x[j] - y[j])
                okCheo++;
        }
    //cout << okHang << " " << okCot << " " << okCheo << endl;
    if (okHang == 0 && okCot == 0 && okCheo == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}
