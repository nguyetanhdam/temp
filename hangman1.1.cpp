#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string s;
    ifstream file;
    if (file.is_open())
    {
        while (getline(file, s))
        {
            cout << s << endl;
        }
        file.close();
    }
    else
        cout << "Unable to open file";
    return 0;
}