#include <iostream>
using namespace std;
class Area
{
private:
    int length, width;

public:
    Area(int length)
    {
        this->length = length;
    }
    Area(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
    int findArea(int length, int width)
    {
        return length * width;
    }
    int findArea(int length)
    {
        return length * length;
    }
};
int main()
{
    Area obj(4, 5);
    cout << "Area of Rectangle : " << obj.findArea(4, 5) << endl;
    Area obj1(5);
    cout << "Area of Square : " << obj1.findArea(5) << endl;
    return 0;
}