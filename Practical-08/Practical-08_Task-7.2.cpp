#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "In Swap Function" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{
    int a = 10, b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    Swap(a, b);
    cout << "After Calling Swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}