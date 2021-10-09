#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    s1 = "abc";
    s2 = "abc";
    cout << s1.compare(s2) << endl;
    s1 = "abc";
    s2 = "abcd";
    cout << s1.compare(s2) << endl;
    s1 = "abcd";
    s2 = "abc";
    cout << s1.compare(s2) << endl;
    s1 = "a";
    s2 = "e";
    cout << s1.compare(s2) << endl;
    s1 = "z";
    s2 = "u";
    cout << s1.compare(s2) << endl;
    s1 = "abc";
    s2 = "zyxs";
    cout << s1.compare(s2) << endl;
    return 0;
}

