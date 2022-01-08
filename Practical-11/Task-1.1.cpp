#include <iostream>
using namespace std;
class A
{
public:
    void displayA()
    {
        cout << " Class A Method Called " << endl;
    }
};
class B : protected A
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
    obj.displayB();
    return 0;
}