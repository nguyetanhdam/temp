/*
    12/03/2021
    Permutation : duyệt hoán vị
    Per(abcdef) : danh sách tất cả các hoán vị của abcdef
    Per(abcdef) = a + Per(bcdef)
                = b + Per(acdef)
                    ...
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string res = "";
    int dem = 0;

    while (next_permutation(s.begin(), s.end()))
    {
        res = res + s;
        cout << res << endl;
        res = "";
    }
    return 0;
}
