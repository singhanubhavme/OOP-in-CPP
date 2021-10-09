#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter first String: ";
    getline(cin, s1);
    cout << "Enter second String: ";
    getline(cin, s2);
    int flag = 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "Both are Not Equal";
    else
        cout << "Both are Equal";
    return 0;
}

