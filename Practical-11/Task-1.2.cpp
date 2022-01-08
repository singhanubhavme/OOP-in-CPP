#include <iostream>
using namespace std;
class A
{
public:
    void displayA()
    {
        cout << "Class A Method Called" << endl;
    }
};
class B : public A
{
public:
    void displayB()
    {
        cout << "Calling Class A method from Class B method" << endl;
        displayA();
    }
};
int main()
{
    B obj;
    obj.displayA();
    return 0;
}
