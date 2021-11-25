#include <iostream>
using namespace std;
class Remainder
{
private:
    int n1, n2;

public:
    Remainder(int n1, int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }
    int remainder()
    {
        return (n1 % n2);
    }
};
int main()
{
    int n1 = 17, n2 = 3;
    Remainder obj(n1, n2);
    cout << "Remainder " << n1 << " % " << n2 << " is " << obj.remainder();
    return 0;
}