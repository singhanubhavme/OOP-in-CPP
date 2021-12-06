#include <iostream>
using namespace std;
class A
{
public:
int x;
protected:
int y;
private:
int z;
};
class B:private A
{
public:
void display(){
x = 10, y = 20;
// z = 30; error
cout << x <<" " << y << " " << endl;
}
};
int main()
{
B obj;
//obj.x = 11;
//obj.y = 12;
//obj.z = 13;
obj.display();
return 0;
}

