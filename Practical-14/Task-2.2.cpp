#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};
class Child : public Base
{
public:
    Child()
    {
        cout << "Child Constructor" << endl;
    }
    ~Child()
    {
        cout << "Child Destructor" << endl;
    }
};
int main()
{
    Base *p;
    Child c;
    p = &c;
    delete p;
    return 0;
}
