#include <iostream>
using namespace std;
namespace intsum
{
	int add(int a, int b)
	{
		return a + b;
	}
}
namespace floatsum
{
	float add(float a, float b)
	{
		return a + b;
	}
}
int main()
{
	cout << "Sum is " << add(2, 6) << endl;
	cout << "Sum is " << add(1.2f, 3.2f) << endl;
	return 0;
}

