#include <iostream>
#include <math.h>
using namespace std;
int series(int n, int sum)
{
    if (n == 0)
        return sum;
    sum = sum + (pow(n, n) + n);
    return series(n - 1, sum);
}
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the limit : ";
    cin >> n;
    cout << "Sum of the series is " << series(n, sum);
}