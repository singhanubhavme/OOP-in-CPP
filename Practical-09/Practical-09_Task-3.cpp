#include <iostream>
using namespace std;
class Calls
{
public:
    static int count;
    int add(int a, int b)
    {
        count++;
        return a + b;
    }
};
int Calls::count;
int main()
{
    Calls obj1, obj2, obj3;
    cout << "First Sum : " << obj1.add(4, 5) << endl;
    cout << "Second Sum : " << obj1.add(12, 15) << endl;
    cout << "Third Sum : " << obj2.add(-4, 5) << endl;
    cout << "Number of Calls : " << Calls::count;
    return 0;
}