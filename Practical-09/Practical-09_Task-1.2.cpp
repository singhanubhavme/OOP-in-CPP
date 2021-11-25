#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int year;
    char section;
};
int main()
{
    Student studs[100];
    char ch;
    int count = 0, i = 0;
    while (true)
    {
        cout << "Enter Student's Name, Age, Year and Section " << endl;
        cin >> studs[i].name >> studs[i].age >> studs[i].year >> studs[i].section;
        count++;
        i++;
        cout << "Continue Y/N ";
        cin >> ch;
        if (ch == 'N')
            break;
    }
    cout << "Number of Students are -> " << count;
    return 0;
}