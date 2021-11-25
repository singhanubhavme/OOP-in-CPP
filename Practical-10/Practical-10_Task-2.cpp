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
    void display(Student *obj)
    {
        cout << "Name : " << obj->name << endl;
        cout << "Age : " << obj->age << endl;
        cout << "Marks : " << obj->marks << endl;
    }
};
int main()
{
    Student obj("Anubhav", 20, 97);
    obj.display(&obj);
    return 0;
}   