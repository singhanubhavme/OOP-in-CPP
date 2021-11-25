#include <iostream>
using namespace std;
class Directory
{
public:
    string name;
    string address;
    unsigned long int number;
    string hof;

    void display(Directory *people, int num)
    {
        int i = 0;
        while (num != i)
        {
            cout << "Family Number : " << i + 1 << endl;
            cout << "Name : " << people[i].name << endl;
            cout << "Address : " << people[i].address << endl;
            cout << "Phone Number : " << people[i].number << endl;
            cout << "Head of Family : " << people[i].hof << endl;
            i++;
        }
    }
};
int main()
{
    int num;
    cout << "Enter Number of People in Directory : ";
    cin >> num;
    Directory person[num];
    int i = 0;
    while (i != num)
    {
        cout << "Enter Name : ";
        cin >> person[i].name;
        cout << "Enter Address : ";
        cin >> person[i].address;
        cout << "Enter Phone Number : ";
        cin >> person[i].number;
        cout << "Enter Head of Family : ";
        cin >> person[i].hof;
        i++;
    }
    cout << "DATA" << endl;
    person[0].display(person, num);
    return 0;
}