#include <iostream>
using namespace std;
class Sum
{
public:
    int n;
    int operator+(Sum obj1)
    {
        return (this->n + obj1.n);
    }
};
int main()
{
    Sum obj1, obj2;
    obj1.n = 514;
    obj2.n = 231;
    cout << "Sum is : " << (obj1 + obj2);
    return 0;
}