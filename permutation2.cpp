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
#include <utility>

using namespace std;

void permutation(string s, int low, int high)
{
    if (low == high)
        cout << s << endl;
    if (low < high)
    {
        for (int i = low; i <= high; i++)
        {
            swap(s[low], s[i]);
            permutation(s, low + 1, high);
            cout << s << endl;
            swap(s[low], s[i]);
        }
    }
}

int main()
{
    string s;
    getline(cin, s);
    permutation(s, 1, s.length());
    return 0;
}

