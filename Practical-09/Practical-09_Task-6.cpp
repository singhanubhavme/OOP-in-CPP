#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name = "Anubhav";
    int age = 20;
    cout << "Using endl->\n";
    cout << name << endl
         << age << endl;
    cout << "Using setw->\n";
    cout << setw(10);
    cout << name << endl;
    cout << setw(10);
    cout << age << endl;
    cout << "Using setfill->\n";
    cout << setw(10) << setfill('*') << name;
    return 0;
}