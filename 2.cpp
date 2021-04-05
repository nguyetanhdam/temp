#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        int count = 0;
        getline(cin,s);

        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i+1] != ' ')
            {
                if(s[i+1]>= 'a' && s[i+1]<='z') count++;
            }
        }
        // for loop from the begin to the end
        // if it's a start of a new word and it's between A and Z
            // if these's something but space after it, it have to be a Name
        // otherwise
            // nothing happen

        cout << count << endl;
    }

    return 0;
}
