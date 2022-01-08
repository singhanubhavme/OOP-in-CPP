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
    using Base::add;
    int add(int a, int b)
    {
        return a + b + 1;
    }
};
int main()
{
    Child obj2;
    int ans1 = obj2.add(1, 2);
    float ans2 = obj2.add(5.5f, 2.15f);
    string ans3 = obj2.add('a', 'b');
    cout << "With 'using' = " << endl
         << ans1 << endl
         << ans2 << endl
         << ans3;
    return 0;
}
/*
not visible functions
with using
Base-add(int ,int)
*/
