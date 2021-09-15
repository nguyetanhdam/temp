#include <bits/stdc++.h>

using namespace std;

//int main()
//{
//    int k, cnt = 0;
//    string s;
//    cin >> k;
//    while (cin >> s)
//    {
//        cnt++;
//        if (cnt == k) cout << s;
//    }
//    return 0;
//}

string tuthuk (string s, int k)
{
    string res = "";
    int cnt = 1, i = 0;
    while (cnt < k)
    {
        if (s[i] == ' ') cnt++;
        i++;
    }
    while (s[i] != ' ' && i < s.length())
    {
        res += s[i];
        i++;
    }
    return res;
}

int main()
{
    int k;
    string s;
    getline (cin, s);
    cin >> k;
    cout << tuthuk (s, k);
    return 0;
}
