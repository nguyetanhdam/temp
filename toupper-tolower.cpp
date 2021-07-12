#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for_each(s.begin(), s.end(), [](char &c)
    {
        c = tolower(c);
    });
    cout << s << endl;
    for_each(s.begin(), s.end(), [](char &c)
    {
        c = toupper(c);
    });
    cout << s;
    return 0;
}
