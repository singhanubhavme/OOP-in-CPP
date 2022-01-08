#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    string add(char a, char b)
    {
        string sum;
        sum = sum + a;
        sum = sum + b;
        return sum;
    }
};
class Child : public Base
{
public:
    int add(int a, int b)
    {
        return a + b + 1;
    }
};
int main()
{
    Base obj1;
    Child obj2;
    int ans1 = obj1.add(6, 3);
    int ans2 = obj2.add(1, 6);
    cout << "Overriding function called from base class = " << ans1 << endl;
    cout << "overriding function called from child class = " << ans2 << endl;
    return 0;
}
