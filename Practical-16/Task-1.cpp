#include <iostream>
using namespace std;
template <typename A, typename B, typename R>
R add(A n1, B n2)
{
    R ans = n1 + n2;
    return ans;
}
int main()
{
    // Task a
    cout << add<int, int, int>(2, 3) << endl;
    // Task b
    cout << add<int, float, double>(2, 3.5f) << endl;
}
