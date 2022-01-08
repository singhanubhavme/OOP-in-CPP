#include <iostream>
using namespace std;
class MarineAnimals
{
public:
    void displayMA()
    {
        cout << "This is a Marine Animal" << endl;
    }
};
class Mammals
{
public:
    void displayM()
    {
        cout << "This is a Mammal" << endl;
    }
};
class BlueWhale : public MarineAnimals, public Mammals
{
public:
    void displayB()
    {
        cout << "This is a Mammal and a Marine Animal" << endl;
    }
};
int main()
{
    Mammals ob1;
    MarineAnimals ob2;
    BlueWhale ob3;
    ob1.displayM();
    ob2.displayMA();
    ob3.displayB();
    ob3.displayM();
    ob3.displayMA();
    return 0;
}