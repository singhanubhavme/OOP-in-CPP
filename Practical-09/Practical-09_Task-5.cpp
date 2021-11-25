#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int marks;
};
class College
{
    string name;
    int age;
    int marks;

public:
    College(struct Student std1)
    {
        this->name = std1.name;
        this->age = std1.age;
        this->marks = std1.marks;
    }
    void printData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main()
{
    struct Student stud1;
    stud1.name = "Anubhav";
    stud1.age = 20;
    stud1.marks = 97;
    College s1(stud1);
    s1.printData();
    return 0;
}
