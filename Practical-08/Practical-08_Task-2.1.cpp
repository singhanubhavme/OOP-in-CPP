#include <iostream>
using namespace std;
int main()
{
int arr[] = {10,20,30};

cout << *arr;

cout << arr;

arr++;
// can't modify the address of array

cout << *arr;
return 0;
}