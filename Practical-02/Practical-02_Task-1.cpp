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
    while (true)
    {
        cout << "Enter a number or 0 to exit -> ";
        cin >> num;
        if (num == 0)
            break;
        if (num <= 1)
        {
            cout << num << " is not a Prime Number\n";
            continue;
        }
        if (isPrime(num))
            cout << num << " is a Prime Number\n";
        else
            cout << num << " is Not a Prime Number\n";
    }
    return 0;
}
