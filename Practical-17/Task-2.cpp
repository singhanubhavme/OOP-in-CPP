#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
// Part A
void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    printvector(v);
    // Part B
    cout << "Size of the vector is : " << v.size() << "\t Capacity of vector is : " << v.capacity()
         << "\n";
    // Part C
    v.resize(2 * n, 0);
    cout << "Printing vector after resizing and intialising after 0\n";
    printvector(v);
    // Part D
    cout << "Checking vector is empty or not after :\n";
    if (v.empty())
        cout << "Vector is empty\t";
    else
        cout << "Vector is not empty";
    return 0;
}