// Password
// http://www.hackerearth.com/problem/algorithm/password-1/

#include <iostream>
#include <string.h>

using namespace std;

string xaudoixung (string s)
{
    string ss = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ss = ss + s[i];
    }
    return ss;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string res, str[10005];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cin.ignore();
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[j] == xaudoixung(str[i]))
            {
                res = str[j];
                break;
            }
        }
    }
    int i = res.length();
    cout << i << " " << res[i/2] ;
    return 0;
}
