#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter a number -> ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is Not a Prime Number";
    return 0;
}
