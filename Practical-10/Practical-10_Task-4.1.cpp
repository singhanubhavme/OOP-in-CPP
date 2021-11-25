#include <iostream>
using namespace std;
class LessThan
{
public:
    int a;
    friend bool operator<(LessThan obj1, LessThan obj2);
};
bool operator<(LessThan obj1, LessThan obj2)
{
    return (obj1.a < obj2.a);
}
int main()
{
    LessThan obj1, obj2;
    obj1.a = 6;
    obj2.a = 7;
    if (obj1 < obj2)
    {
        cout << " obj1 < obj2 ";
    }
    else
    {
        cout << " obj1 > obj2 ";
    }
    return 0;
};