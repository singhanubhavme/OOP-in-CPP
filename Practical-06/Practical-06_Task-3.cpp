#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter  a String : ";
    getline(cin, str);
    string newstr = str;
    reverse(str.begin(), str.end());
    cout << "Using Reverse Method : " << str << endl;
    cout << "Using Reverse Iterator : ";
    string::reverse_iterator rit;
    for (rit = newstr.rbegin(); rit != newstr.rend(); ++rit)
        cout << *rit;
    return 0;
}

