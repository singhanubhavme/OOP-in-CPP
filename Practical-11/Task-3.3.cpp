#include <iostream>
using namespace std;
class A
{
public:
    int k;
    void displayA()
    {
        cout << "k in A = " << k << endl;
    }
};
class B
{
public:
    int k;
    void displayB()
    {
        cout << "k in B = " << k << endl;
    }
};
class C : public A, public B
{
public:
    void displayC()
    {
        cout << "k of A and B inherited in C = " << A::k << " " << B::k << endl;
    }
};
int main()
{
    C obj;
    obj.A::k = 12;
    obj.B::k = 11;
    obj.displayC();
    return 0;
}
