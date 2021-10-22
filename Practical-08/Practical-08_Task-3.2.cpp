#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    int **q;
    p = &a;
    q = &p;
    cout << *p << " ";
    **q = **q * 3;
    // multiplied by 3
    cout << **q;
    return 0;
}
