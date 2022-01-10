#include <iostream>
#include <list>
#include <iterator>
using namespace std;
// Part A
void printList(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    list<int> l;
    int n;
    cout << "Enter the size of the List \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        l.push_back(ele);
    }
    printList(l);
    // Part B
    cout << "Size of the list is : " << l.size() << "\n";
    // Part C
    l.sort();
    cout << "Printing list after sorting\n";
    printList(l);
    // Part D
    l.reverse();
    cout << "Printing list after Reversing\n";
    printList(l);
    return 0;
}