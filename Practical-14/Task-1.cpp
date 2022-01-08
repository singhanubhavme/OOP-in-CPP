#include <iostream>
using namespace std;
class Base
{
public:
    virtual int add(int a, int b)
    {
        return a + b;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};
class Child : public Base
{
public:
    int add(int a, int b)
    {
        return a + b + 1;
    }
    int multi(int a, int b)
    {
        return a / b;
    }
};
int main()
{
    Base *p;
    Child c;
    p = &c;
    cout << p->multi(3, 7) << " "; // early binding (compile time binding)
    cout << p->add(11, 2);         // late binding (run time binding)
}
