#include <iostream>
using namespace std;
class A{
public:
int x, y;
};
class B:public A{
public:
void display(){
cout << x<<" "<<y <<endl;
}
};
int main()
{
B obj;
obj.x = 40;
obj.y = 50;
obj.display();
return 0;
}

