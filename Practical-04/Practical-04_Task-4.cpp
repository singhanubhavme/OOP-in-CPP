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
using namespace intsum;
using namespace floatsum;

int main()
{
	cout << "Sum is " << add(2.1f, 6) << endl;
	return 0;
}

