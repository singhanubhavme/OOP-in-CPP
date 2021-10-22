#include <iostream>
using namespace std;
long long int fact(int n)
{
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Factorial of " << num << " is "<< fact(num);
    return 0;
}