#include <iostream>
using namespace std;
class A{
public:
int x, y;
};
class B:public A{
public:
void display(){
x=10, y=20;
cout << x<<" "<<y <<endl;
}
};
int main()
{
B obj;
obj.display();
return 0;
}

