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
    if (str == newstr)
        cout << "Yes, it is a Palindrome";
    else
        cout << "No, it is not a Palindrome";
    return 0;
}

