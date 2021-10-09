#include <iostream>
using namespace std;
int main()
{
    string a = "Hello";
    cout << a << endl;
    cout << (long int)&a << endl;
    a[0] = 'J';
    cout << (long int)&a << endl;
    cout << a << endl;
    return 0;
}

