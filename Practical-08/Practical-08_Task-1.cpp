#include <iostream>
using namespace std;
int main()
{
    // int *p = {10, 20, 20};
    // giving error because it is a pointer not an array
    // to solve this change *p to p[3]
    int p[3] = {10, 20, 20};
    cout << *p;

    p++;

    cout << *p;
    return 0;
}