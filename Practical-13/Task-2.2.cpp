#include <iostream>
using namespace std;
class Base
{
public:
    virtual int add(int a, int b) // due to virtual keyword complier will ignore it during compile time
    {
        return a + b;
    }
    virtual int multi(int a, int b) = 0; // due to abstraction complier will not bind this function at compile time  it will bind during runtime
};
class Child : public Base
{
public:
    int add(int a, int b) //  during runtime this definition will be followed
    {
        return a + b + 1;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};
int main()
{
    Base *p;
    Child c;
    p = &c;
    cout << p->multi(11, 2);
    return 0;
}
