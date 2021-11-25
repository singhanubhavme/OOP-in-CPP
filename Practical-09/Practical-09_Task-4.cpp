#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;
    int marks;
public:
    Student(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
    friend int marksSum(Student s1, Student s2, Student s3);
};
int marksSum(Student s1, Student s2, Student s3)
{
    return (s1.marks + s2.marks + s3.marks);
}
int main()
{
    Student s1("Anubhav", 20, 97);
    Student s2("Messi", 30, 49);
    Student s3("Roanldo", 41, 63);
    int total = marksSum(s1, s2, s3);
    cout << "Total Marks is " << total << "/300";
    return 0;
}