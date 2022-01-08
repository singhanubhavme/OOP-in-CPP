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
    Child obj2;
    int ans1 = obj2.add(1, 2);
    float ans2 = obj2.add(5.5f, 2.15f);
    cout << "Without 'using' = " << endl
         << ans1 << " " << ans2;
}
/*
invisible functions
without using
Base -int add(int,int)
      -float add(float ,float)
      -string add(char,char)
*/
